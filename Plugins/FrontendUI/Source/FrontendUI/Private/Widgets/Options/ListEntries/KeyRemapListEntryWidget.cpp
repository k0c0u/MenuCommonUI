// copyright iznankai


#include "Widgets/Options/ListEntries/KeyRemapListEntryWidget.h"

#include "FrontendFunctionLibrary.h"
#include "Subsystems/FrontendUISubsystem.h"
#include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "Widgets/Options/DataObjects/KeyRemapListDataObject.h"
#include "FrontendGameplayTags.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "Widgets/Options/KeyRemapScreenWidget.h"


void UKeyRemapListEntryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	RemapKey->OnClicked().AddUObject(this, &ThisClass::OnRemapKeyButtonClicked);
	ResetKeyBinding->OnClicked().AddUObject(this, &ThisClass::OnResetKeyBindingButtonClicked);
}

void UKeyRemapListEntryWidget::OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject)
{
	Super::OnOwningListDataObjectSet(InOwningListDataObject);

	KeyRemapDataObject = Cast<UKeyRemapListDataObject>(InOwningListDataObject);
	if (KeyRemapDataObject.IsValid() && IsValid(RemapKey.Get()))
	{
		RemapKey->SetButtonDisplayImage(KeyRemapDataObject->GetIconFromCurrentKey());
	}
}

void UKeyRemapListEntryWidget::OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
                                                              EOptionsListDataModifyReason OwningModifiedReason)
{
	if (KeyRemapDataObject.IsValid() && IsValid(RemapKey.Get()))
	{
		RemapKey->SetButtonDisplayImage(KeyRemapDataObject->GetIconFromCurrentKey());
	}
}

UWidget* UKeyRemapListEntryWidget::GetWidgetToFocusForGamepad() const
{
	return RemapKey.Get();
}

void UKeyRemapListEntryWidget::OnRemapKeyButtonClicked()
{
	SelectedThisEntryWidget();

	UFrontendUISubsystem::Get(this)->PushSoftWidgetToStackAsync(
		FrontendGameplayTags::Frontend_WidgetStack_Modal,
		UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag(FrontendGameplayTags::Frontend_Widget_KeyRemapScreen),
		[this](EAsyncPushWidgetState PushState, UBaseActivatableWidget* PushedWidget)
		{
			if (PushState == EAsyncPushWidgetState::OnCreatedBeforePush)
			{
				if (UKeyRemapScreenWidget* CreatedKeyRemapScreen = Cast<UKeyRemapScreenWidget>(PushedWidget))
				{
					CreatedKeyRemapScreen->OnKeyRemapScreenKeyPressed.
					                       BindUObject(this, &ThisClass::OnKeyToRemapPressed);
					CreatedKeyRemapScreen->OnKeyRemapScreenKeySelectCanceled.BindUObject(
						this, &ThisClass::OnKeyRemapCanceled);
					if (KeyRemapDataObject.IsValid())
					{
						CreatedKeyRemapScreen->
							SetDesiredInputTypeToFilter(KeyRemapDataObject->GetDesiredInputKeyType());
					}
				}
			}
		});
}

void UKeyRemapListEntryWidget::OnResetKeyBindingButtonClicked()
{
	SelectedThisEntryWidget();

	if (!KeyRemapDataObject.IsValid())
	{
		return;
	}

	if (KeyRemapDataObject.IsValid() && !KeyRemapDataObject->CanResetBackToDefaultValue())
	{
		UFrontendUISubsystem::Get(this)->PushConfirmScreenToModalStackAsync(EConfirmScreenType::Ok,
		                                                                    FText::FromString(
			                                                                    TEXT("Reset Key Mapping")),
		                                                                    FText::FromString(
			                                                                    TEXT("The Key inding for ") +
			                                                                    KeyRemapDataObject->GetDataDisplayName()
			                                                                    .ToString() + TEXT(
				                                                                    " is already set to default")),
		                                                                    [](EConfirmScreenButtonType ClickedButton)
		                                                                    {
		                                                                    });

		return;
	}

	//Reset key binding back to default
	UFrontendUISubsystem::Get(this)->PushConfirmScreenToModalStackAsync(EConfirmScreenType::YesNo,
	FText::FromString(TEXT("Reset Key Mapping")),
	FText::FromString(TEXT("Are you sure you want to reset the key binding for ") +
	KeyRemapDataObject->GetDataDisplayName().ToString() + TEXT("?")),
[this](EConfirmScreenButtonType ClickedButton)
		            {
		                if (ClickedButton == EConfirmScreenButtonType::Confirmed)
		                {
		                    KeyRemapDataObject->TryResetBackToDefaultValue();
		                }
		            });
}

void UKeyRemapListEntryWidget::OnKeyToRemapPressed(const FKey& PressedKey)
{
	if (KeyRemapDataObject.IsValid())
	{
		KeyRemapDataObject->BindNewInputKey(PressedKey);
	}
}

void UKeyRemapListEntryWidget::OnKeyRemapCanceled(const FText& CanceledReason)
{
	const FText RemapText = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("KeyRemapKey")));
	UFrontendUISubsystem::Get(this)->PushConfirmScreenToModalStackAsync(EConfirmScreenType::Ok, RemapText, CanceledReason,
	                                                                    [](EConfirmScreenButtonType)
	                                                                    {
	                                                                    });
}
