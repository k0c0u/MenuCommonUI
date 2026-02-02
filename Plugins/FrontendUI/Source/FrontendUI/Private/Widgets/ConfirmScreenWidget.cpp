// copyright iznankai


#include "Widgets/ConfirmScreenWidget.h"
#include "CommonTextBlock.h"
#include "Components/DynamicEntryBox.h"
#include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "ICommonInputModule.h"
#include "FontendSettings/FrontendDeveloperSettings.h"

UConfirmScreenInfoObject* UConfirmScreenInfoObject::CreateOKScreen(const FText& InScreenTitle, const FText& InScreenMsg)
{
	UConfirmScreenInfoObject* InfoObject = NewObject<UConfirmScreenInfoObject>();
	InfoObject->ScreenTitle = InScreenTitle;
	InfoObject->ScreenMessage = InScreenMsg;

	FConfirmScreenButtonInfo OKButtonInfo;
	OKButtonInfo.ConfirmScreenButtonType = EConfirmScreenButtonType::Closed;
	OKButtonInfo.ButtonTextToDisplay = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("OkKey")));

	InfoObject->AvailableScreenButtons.Add(OKButtonInfo);

	return InfoObject;
}

UConfirmScreenInfoObject* UConfirmScreenInfoObject::CreateYesNoScreen(const FText& InScreenTitle, const FText& InScreenMsg)
{
	UConfirmScreenInfoObject* InfoObject = NewObject<UConfirmScreenInfoObject>();
	InfoObject->ScreenTitle = InScreenTitle;
	InfoObject->ScreenMessage = InScreenMsg;

	FConfirmScreenButtonInfo YesButtonInfo;
	YesButtonInfo.ConfirmScreenButtonType = EConfirmScreenButtonType::Confirmed;
	YesButtonInfo.ButtonTextToDisplay = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("YesKey")));

	FConfirmScreenButtonInfo NoButtonInfo;
	NoButtonInfo.ConfirmScreenButtonType = EConfirmScreenButtonType::Cancelled;
	NoButtonInfo.ButtonTextToDisplay = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("NoKey")));

	InfoObject->AvailableScreenButtons.Add(YesButtonInfo);
	InfoObject->AvailableScreenButtons.Add(NoButtonInfo);

	return InfoObject;
}

UConfirmScreenInfoObject* UConfirmScreenInfoObject::CreateOkCancelScreen(const FText& InScreenTitle, const FText& InScreenMsg)
{
	UConfirmScreenInfoObject* InfoObject = NewObject<UConfirmScreenInfoObject>();
	InfoObject->ScreenTitle = InScreenTitle;
	InfoObject->ScreenMessage = InScreenMsg;

	FConfirmScreenButtonInfo OkButtonInfo;
	OkButtonInfo.ConfirmScreenButtonType = EConfirmScreenButtonType::Confirmed;
	OkButtonInfo.ButtonTextToDisplay = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("OkKey")));

	FConfirmScreenButtonInfo CancelButtonInfo;
	CancelButtonInfo.ConfirmScreenButtonType = EConfirmScreenButtonType::Cancelled;
	CancelButtonInfo.ButtonTextToDisplay = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("CancelKey")));

	InfoObject->AvailableScreenButtons.Add(OkButtonInfo);
	InfoObject->AvailableScreenButtons.Add(CancelButtonInfo);

	return InfoObject;
}

void UConfirmScreenWidget::InitConfirmScreen(UConfirmScreenInfoObject* InScreenInfoObject, TFunction<void(EConfirmScreenButtonType)> ClickedButtonCallback)
{
	if (IsValid(InScreenInfoObject) && IsValid(CommonTextBlock_Title) && IsValid(CommonTextBlock_Message) && IsValid(DynamicEntryBox_Buttons))
	{
		CommonTextBlock_Title->SetText(InScreenInfoObject->ScreenTitle);
		CommonTextBlock_Message->SetText(InScreenInfoObject->ScreenMessage);
	
		if (DynamicEntryBox_Buttons->GetNumEntries() != 0)
		{
			DynamicEntryBox_Buttons->Reset<UFrontendCommonButtonBase>(
				[](UFrontendCommonButtonBase& ExistingButton)
				{
					ExistingButton.OnClicked().Clear();
				}
			);
		}
	}
	
	
	if (IsValid(InScreenInfoObject) && IsValid(DynamicEntryBox_Buttons) && !InScreenInfoObject->AvailableScreenButtons.IsEmpty())
	{
		for (const FConfirmScreenButtonInfo& AvailableButtonInfo : InScreenInfoObject->AvailableScreenButtons)
		{
			UFrontendCommonButtonBase* AddedButton = DynamicEntryBox_Buttons->CreateEntry<UFrontendCommonButtonBase>();
			AddedButton->SetButtonText(AvailableButtonInfo.ButtonTextToDisplay);
			AddedButton->OnClicked().AddLambda(
				[ClickedButtonCallback,AvailableButtonInfo,this]()
				{
					ClickedButtonCallback(AvailableButtonInfo.ConfirmScreenButtonType);

					DeactivateWidget();
				}
			);
		}
	}

	
}

UWidget* UConfirmScreenWidget::NativeGetDesiredFocusTarget() const
{
	if (IsValid(DynamicEntryBox_Buttons) && DynamicEntryBox_Buttons->GetNumEntries() != 0)
	{
		DynamicEntryBox_Buttons->GetAllEntries().Last()->SetFocus();
	}
	
	return Super::NativeGetDesiredFocusTarget();
}
