// copyright iznankai


#include "AsyncActions/PushSoftWidgetAsyncAction.h"
#include "Subsystems/FrontendUISubsystem.h"

#include "Widgets/BaseActivatableWidget.h"

UPushSoftWidgetAsyncAction* UPushSoftWidgetAsyncAction::PushSoftWidget(const UObject* WorldContextObject, APlayerController* OwningPlayerController, TSoftClassPtr<UBaseActivatableWidget> InSoftWidgetClass, UPARAM(meta = (Categories = "Frontend.WidgetStack")) FGameplayTag InWidgetStackTag, bool bFocusOnNewlyPushedWidget)
{
	if (InSoftWidgetClass.IsNull())
	{
		UE_LOG(LogTemp, Warning, TEXT("UPushSoftWidgetAsyncAction::PushSoftWidget - Soft widget class is null for tag %s"), *InWidgetStackTag.ToString());
		return nullptr;
	}
	
	if (GEngine)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject,EGetWorldErrorMode::LogAndReturnNull))
		{
			UPushSoftWidgetAsyncAction* Node = NewObject<UPushSoftWidgetAsyncAction>();

			Node->CachedOwningWorld = World;
			Node->CachedOwningPC = OwningPlayerController;
			Node->CachedSoftWidgetClass = InSoftWidgetClass;
			Node->CachedWidgetStackTag = InWidgetStackTag;
			Node->bCachedFocusOnNewlyPushedWidget = bFocusOnNewlyPushedWidget;
			
			Node->RegisterWithGameInstance(World);

			return Node;
		}
	}

	return nullptr;
}

void UPushSoftWidgetAsyncAction::Activate()
{
	Super::Activate();

	UFrontendUISubsystem* FrontendUISubsystem = UFrontendUISubsystem::Get(CachedOwningWorld.Get());

	FrontendUISubsystem->PushSoftWidgetToStackAsync(CachedWidgetStackTag,CachedSoftWidgetClass,
		[this](EAsyncPushWidgetState InPushState, UBaseActivatableWidget* PushedWidget)
		{
			switch (InPushState)
			{
			case EAsyncPushWidgetState::OnCreatedBeforePush:
				{
					PushedWidget->SetOwningPlayer(CachedOwningPC.Get());
					OnWidgetCreatedBeforePush.Broadcast(PushedWidget);
					break;
				}
			case EAsyncPushWidgetState::AfterPush:
				{
					AfterPush.Broadcast(PushedWidget);
					if (bCachedFocusOnNewlyPushedWidget)
					{
						if (UWidget* WidgetToFocus = PushedWidget->GetDesiredFocusTarget())
						{
							WidgetToFocus->SetFocus();
						}
					}
					SetReadyToDestroy();
					break;
				}
			default:
				break;
			}
		}
	);
}
