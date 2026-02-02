// copyright iznankai


#include "Widgets/Buttons/FrontendCommonButtonBase.h"

#include "CommonLazyImage.h"
#include "CommonTextBlock.h"
#include "Subsystems/FrontendUISubsystem.h"

void UFrontendCommonButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (IsValid(ButtonImage.Get()))
	{
		if (!SoftButtonImage.IsNull())
		{
			ButtonImage->SetBrushFromLazyTexture(SoftButtonImage);
		}
		
		ButtonImage->SetColorAndOpacity(DefaultButtonImageColor);
		ButtonImage->SetDesiredSizeOverride(FVector2D(DesiredSize));
	}

	SetButtonText(ButtonDisplayText);

	if (IsDesignTime() && !PreviewSoftButtonImage.IsNull())
	{
		ButtonImage->SetBrushFromLazyTexture(PreviewSoftButtonImage);
	}
}

void UFrontendCommonButtonBase::ToggleButtonImageHighlight_Implementation(bool bShouldHighlight)
{
	if (IsValid(ButtonImage.Get()))
	{
		bShouldHighlight
			? ButtonImage->SetColorAndOpacity(HighlightButtonImageColor)
			: ButtonImage->SetColorAndOpacity(DefaultButtonImageColor);;
	}
}

void UFrontendCommonButtonBase::SetButtonText(FText InText)
{
	if (CommonTextBlock_ButtonText && !InText.IsEmpty())
	{
		CommonTextBlock_ButtonText->SetText(bUserUpperCaseForButtonText ? InText.ToUpper() : InText);
	}
}

FText UFrontendCommonButtonBase::GetButtonDisplayText() const
{
	if (IsValid(CommonTextBlock_ButtonText.Get()))
	{
		return CommonTextBlock_ButtonText->GetText();
	}
	return FText();
}

void UFrontendCommonButtonBase::SetButtonDisplayImage(const FSlateBrush& InBrush)
{
	if (IsValid(ButtonImage.Get()))
	{
		ButtonImage->SetBrush(InBrush);
	}
}

void UFrontendCommonButtonBase::NativeOnCurrentTextStyleChanged()
{
	Super::NativeOnCurrentTextStyleChanged();
	if (CommonTextBlock_ButtonText && GetCurrentTextStyleClass())
	{
		CommonTextBlock_ButtonText->SetStyle(GetCurrentTextStyleClass());
	}
}

void UFrontendCommonButtonBase::NativeOnHovered()
{
	Super::NativeOnHovered();

	if (!ButtonDescriptionText.IsEmpty())
	{
		UFrontendUISubsystem::Get(this)->OnButtonDescriptionTextUpdated.Broadcast(this, ButtonDescriptionText);
	}

	if (bToggleHighlightStateWhenHovered)
	{
		ToggleButtonImageHighlight(true);
	}
}

void UFrontendCommonButtonBase::NativeOnUnhovered()
{
	Super::NativeOnUnhovered();
	UFrontendUISubsystem::Get(this)->OnButtonDescriptionTextUpdated.Broadcast(this, FText::GetEmpty());

	if (bToggleHighlightStateWhenHovered)
	{
		ToggleButtonImageHighlight(false);
	}
}
