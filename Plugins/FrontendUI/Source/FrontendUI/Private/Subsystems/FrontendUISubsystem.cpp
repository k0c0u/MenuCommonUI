// copyright iznankai


#include "Subsystems/FrontendUISubsystem.h"
#include "Engine/AssetManager.h"
#include "Widgets/PrimaryLayoutWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "Widgets/BaseActivatableWidget.h"
#include "Widgets/ConfirmScreenWidget.h"
#include "FrontendFunctionLibrary.h"
#include "FrontendGameplayTags.h"

UFrontendUISubsystem* UFrontendUISubsystem::Get(const UObject* WorldContextObject)
{
	if (GEngine)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject,EGetWorldErrorMode::Assert))
		{
			return UGameInstance::GetSubsystem<UFrontendUISubsystem>(World->GetGameInstance());
		}
	}

	return nullptr;
}

bool UFrontendUISubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (!Cast<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		TArray<UClass*> FoundClasses;
		GetDerivedClasses(GetClass(),FoundClasses);

		return FoundClasses.IsEmpty();
	}

	return false;
}

void UFrontendUISubsystem::RegisterCreatedPrimaryLayoutWidget(UPrimaryLayoutWidget* InCreatedWidget)
{
	if (IsValid(InCreatedWidget))
		CreatedPrimaryLayout = InCreatedWidget;
}

void UFrontendUISubsystem::PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag,
	TSoftClassPtr<UBaseActivatableWidget> InSoftWidgetClass,
	TFunction<void(EAsyncPushWidgetState, UBaseActivatableWidget*)> AysncPushStateCallback)
{
	if (InSoftWidgetClass.IsNull())
	{
		UE_LOG(LogTemp, Warning, TEXT("UFrontendUISubsystem::PushSoftWidgetToStackAynsc - Soft widget class is null for tag %s"), *InWidgetStackTag.ToString());
		return;
	}

	UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		InSoftWidgetClass.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[InSoftWidgetClass, this, InWidgetStackTag, AysncPushStateCallback]()
			{
				UClass* LoadedWidgetClass = InSoftWidgetClass.Get();
				
				if (!IsValid(LoadedWidgetClass) || !IsValid(CreatedPrimaryLayout))
				{
					UE_LOG(LogTemp, Warning, TEXT("UFrontendUISubsystem::PushSoftWidgetToStackAynsc - LoadedWidgetClass or CreatedPrimaryLayout is null"));
					return;
				}

				if (UCommonActivatableWidgetContainerBase* FoundWidgetStack = CreatedPrimaryLayout->FindWidgetStackByTag(InWidgetStackTag))
				{
					UBaseActivatableWidget* CreatedWidget = FoundWidgetStack->AddWidget<UBaseActivatableWidget>(
					LoadedWidgetClass,
					[AysncPushStateCallback](UBaseActivatableWidget& CreatedWidgetInstance)
					{
						AysncPushStateCallback(EAsyncPushWidgetState::OnCreatedBeforePush,&CreatedWidgetInstance);
					}
					);

					AysncPushStateCallback(EAsyncPushWidgetState::AfterPush,CreatedWidget);
				}
			}
		)
	);
}

void UFrontendUISubsystem::PushConfirmScreenToModalStackAsync(EConfirmScreenType InScreenType, const FText& InScreenTitle, const FText& InScreenMsg, TFunction<void(EConfirmScreenButtonType)> ButtonClickedCallback)
{
	UConfirmScreenInfoObject* CreatedInfoObject = nullptr;

	switch (InScreenType)
	{
	case EConfirmScreenType::Ok:
		{
			CreatedInfoObject = UConfirmScreenInfoObject::CreateOKScreen(InScreenTitle,InScreenMsg);
			break;
		}
	case EConfirmScreenType::YesNo:
		{
			CreatedInfoObject = UConfirmScreenInfoObject::CreateYesNoScreen(InScreenTitle,InScreenMsg);
			break;
		}
	case EConfirmScreenType::OKCancel:
		{
			CreatedInfoObject = UConfirmScreenInfoObject::CreateOkCancelScreen(InScreenTitle,InScreenMsg);
			break;
		}
	case EConfirmScreenType::Unknown:
		break;
	default:
		break;
	}
	
	if (IsValid(CreatedInfoObject))
	{
		PushSoftWidgetToStackAsync(
		FrontendGameplayTags::Frontend_WidgetStack_Modal,
		UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag(FrontendGameplayTags::Frontend_Widget_ConfirmScreen),
		[CreatedInfoObject, ButtonClickedCallback](EAsyncPushWidgetState InPushState, UBaseActivatableWidget* PushedWidget)
		{
			if (InPushState == EAsyncPushWidgetState::OnCreatedBeforePush)
			{
				UConfirmScreenWidget* CreatedConfirmScreen = CastChecked<UConfirmScreenWidget>(PushedWidget);
				CreatedConfirmScreen->InitConfirmScreen(CreatedInfoObject,ButtonClickedCallback);
			}
		}
		);
	}
}