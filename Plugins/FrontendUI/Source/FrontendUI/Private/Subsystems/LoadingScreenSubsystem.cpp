// copyright iznankai


#include "Subsystems/LoadingScreenSubsystem.h"
#include "PreLoadScreenManager.h"
#include "Blueprint/UserWidget.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "FontendSettings/LoadingScreenSettings.h"
#include "Interface/LoadingScreenInterface.h"

bool ULoadingScreenSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (!Cast<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		TArray<UClass*> FoundClasses;
		GetDerivedClasses(GetClass(),FoundClasses);

		return FoundClasses.IsEmpty();
	}

	return false;
}

void ULoadingScreenSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FCoreUObjectDelegates::PreLoadMapWithContext.AddUObject(this, &ThisClass::OnMapPreLoaded);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &ThisClass::OnMapPostLoaded);
}

void ULoadingScreenSubsystem::Deinitialize()
{
	FCoreUObjectDelegates::PreLoadMapWithContext.RemoveAll(this);
	FCoreUObjectDelegates::PostLoadMapWithWorld.RemoveAll(this);
	
	Super::Deinitialize();
}

UWorld* ULoadingScreenSubsystem::GetTickableGameObjectWorld() const
{
	if (UGameInstance* OwningGameInstance = GetGameInstance())
	{
		return OwningGameInstance->GetWorld();
	}
	return FTickableGameObject::GetTickableGameObjectWorld();
}

void ULoadingScreenSubsystem::Tick(float DeltaTime)
{
	TryUpdateLoadingScreen();
}

ETickableTickType ULoadingScreenSubsystem::GetTickableTickType() const
{
	if (IsTemplate())
	{
		return ETickableTickType::Never;
	}
	return ETickableTickType::Conditional;
}

bool ULoadingScreenSubsystem::IsTickable() const
{
	return IsValid(GetGameInstance()) && GetGameInstance()->GetGameViewportClient();
}

TStatId ULoadingScreenSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(ULoadingScreenSubsystem, STATGROUP_Tickables);
}

void ULoadingScreenSubsystem::OnMapPreLoaded(const FWorldContext& WorldContext, const FString& MapName)
{
	if (WorldContext.OwningGameInstance != GetGameInstance())
	{
		return;
	}

	SetTickableTickType(ETickableTickType::Conditional);

	bIsCurrentlyLoadingMap = true;

	TryUpdateLoadingScreen();
}

void ULoadingScreenSubsystem::OnMapPostLoaded(UWorld* LoadedWorld)
{
	if (IsValid(LoadedWorld) && LoadedWorld->GetGameInstance() == GetGameInstance())
	{
		bIsCurrentlyLoadingMap = false;
	}
}

bool ULoadingScreenSubsystem::IsPreLoadScreenActive()
{
	if (const FPreLoadScreenManager* PreLoadScreenManager = FPreLoadScreenManager::Get())
	{
		return PreLoadScreenManager->HasValidActivePreLoadScreen();
	}
	return false;
}

bool ULoadingScreenSubsystem::ShouldShowLoadingScreen()
{
	const ULoadingScreenSettings* LoadingScreenSettings = GetDefault<ULoadingScreenSettings>();
	if (GIsEditor && IsValid(LoadingScreenSettings) && !LoadingScreenSettings->bShouldLoadingScreenInEditor)
	{
		return false;
	}

	if (CheckTheNeedToShowLoadingScreen())
	{
		GetGameInstance()->GetGameViewportClient()->bDisableWorldRendering = true;
		return true;
	}
	
	CurrentLoadingReason = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("WaitingTextureStreamingKey")));

	GetGameInstance()->GetGameViewportClient()->bDisableWorldRendering = false;

	const float CurrentTime = FPlatformTime::Seconds();
	if (HoldLoadingScreenStartUpTime < 0.f)
	{
		HoldLoadingScreenStartUpTime = CurrentTime;
	}
	const float ElapsedTime = CurrentTime - HoldLoadingScreenStartUpTime;
	if (ElapsedTime < LoadingScreenSettings->HoldLoadingScreenSeconds)
	{
		return true;
	}
	return false;
}

bool ULoadingScreenSubsystem::CheckTheNeedToShowLoadingScreen()
{
	if (bIsCurrentlyLoadingMap)
	{
		CurrentLoadingReason = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("LoadingLevelKey")));
		return true;
	}

	UWorld* World = GetGameInstance()->GetWorld();
	
	if (!IsValid(World))
	{
		CurrentLoadingReason = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("InitWorldKey")));
		return true;
	}

	if (IsValid(World) && !World->HasBegunPlay())
	{
		CurrentLoadingReason = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("WorldNotValidKey")));
		return true;
	}

	if (IsValid(World) && !World->GetFirstPlayerController())
	{
		CurrentLoadingReason = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("PCNotValidKey")));
		return true;
	}
	
	return false;
}

void ULoadingScreenSubsystem::TryDisplayLoadingScreenIfNone()
{
	if (CachedCreatedLoadingScreenWidget.IsValid())
	{
		return;
	}
	
	if (const ULoadingScreenSettings* LoadingScreenSettings = GetDefault<ULoadingScreenSettings>())
	{
		if (TSubclassOf<UUserWidget> LoadingWidgetClass = LoadingScreenSettings->GetLoadingScreenWidgetClassChecked())
		{
			if (UUserWidget* CreatedWidget = UUserWidget::CreateWidgetInstance(*GetGameInstance(), LoadingWidgetClass, NAME_None))
			{
				CachedCreatedLoadingScreenWidget = CreatedWidget->TakeWidget();
				if (CachedCreatedLoadingScreenWidget.IsValid())
				{
					GetGameInstance()->GetGameViewportClient()->AddViewportWidgetContent(CachedCreatedLoadingScreenWidget.ToSharedRef(), 1000);

					NotifyLoadingScreenVisibilityChanged(true);
				}
			}
		}
	}
}

void ULoadingScreenSubsystem::TryRemoveLoadingScreen()
{
	if (!CachedCreatedLoadingScreenWidget.IsValid())
	{
		return;
	}

	GetGameInstance()->GetGameViewportClient()->RemoveViewportWidgetContent(CachedCreatedLoadingScreenWidget.ToSharedRef());

	CachedCreatedLoadingScreenWidget.Reset();
}

void ULoadingScreenSubsystem::NotifyLoadingScreenVisibilityChanged(bool bIsVisible)
{
	for (ULocalPlayer* LocalPlayer : GetGameInstance()->GetLocalPlayers())
	{
		if (!LocalPlayer)
		{
			continue;
		}

		if (APlayerController* PC = LocalPlayer->GetPlayerController(GetGameInstance()->GetWorld()))
		{
			if (PC->Implements<ULoadingScreenInterface>())
			{
				if (bIsVisible)
				{
					ILoadingScreenInterface::Execute_OnLoadingScreenActivated(PC);
				}
				else
				{
					ILoadingScreenInterface::Execute_OnLoadingScreenDeactivated(PC);
				}
			}

			if(APawn* OwningPawn = PC->GetPawn())
			{
				if (OwningPawn->Implements<ULoadingScreenInterface>())
				{
					if (bIsVisible)
					{
						ILoadingScreenInterface::Execute_OnLoadingScreenActivated(OwningPawn);
					}
					else
					{
						ILoadingScreenInterface::Execute_OnLoadingScreenDeactivated(OwningPawn);
					}
				}
			}
		}
	}
}

void ULoadingScreenSubsystem::TryUpdateLoadingScreen()
{
	if (IsPreLoadScreenActive())
	{
		return;
	}
	
	if (ShouldShowLoadingScreen())
	{
		TryDisplayLoadingScreenIfNone();
		
		OnLoadingReasonUpdated.Broadcast(CurrentLoadingReason);
	}
	else
	{
		TryRemoveLoadingScreen();

		HoldLoadingScreenStartUpTime = -1.f;
		
		NotifyLoadingScreenVisibilityChanged(false);
		
		SetTickableTickType(ETickableTickType::Never);
	}
}
