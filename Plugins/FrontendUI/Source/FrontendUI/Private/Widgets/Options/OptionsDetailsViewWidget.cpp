// copyright iznankai


#include "Widgets/Options/OptionsDetailsViewWidget.h"
#include "CommonLazyImage.h"
#include "CommonTextBlock.h"
#include "CommonRichTextBlock.h"
#include "Widgets/Options/DataObjects/BaseListDataObject.h"

void UOptionsDetailsViewWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	ClearDetailsViewInfo();
}

void UOptionsDetailsViewWidget::UpdateDetailsViewInfo(UBaseListDataObject* InDataObject,
                                                      const FString& InWidgetClassName)
{
	if (!IsValid(InDataObject))
	{
		return;
	}

	if (IsValid(TitleTextBlock.Get()))
	{
		TitleTextBlock->SetText(InDataObject->GetDataDisplayName());
	}

	if (!InDataObject->GetSoftDescriptionImage().IsNull() && IsValid(LazyImage.Get()))
	{
		LazyImage->SetBrushFromLazyTexture(InDataObject->GetSoftDescriptionImage());
		LazyImage->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		LazyImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (IsValid(DescriptionRichTextBlock.Get()))
	{
		DescriptionRichTextBlock->SetText(InDataObject->GetDescriptionText());
	}

	const FString DynamicDetails = FString::Printf(
		TEXT("Data Object Class: <Bold>%s</>\n\nEntry Widget Class:<Bold>%s</>"),
		*InDataObject->GetClass()->GetName(),
		*InWidgetClassName
	);
	
	if (IsValid(DynamicDetailsRichTextBlock.Get()))
	{
		//DynamicDetailsRichTextBlock->SetText(FText::FromString(DynamicDetails));
	}

	if (IsValid(DisableReasonRichTextBlock.Get()))
	{
		//DisableReasonRichTextBlock->SetText(InDataObject->IsDataCurrentlyEditable() ? FText::GetEmpty() : InDataObject->GetDisableText());
	}
}

void UOptionsDetailsViewWidget::ClearDetailsViewInfo()
{
	if (IsValid(TitleTextBlock.Get()))
	{
		TitleTextBlock->SetText(FText::GetEmpty());
	}

	if (IsValid(LazyImage.Get()))
	{
		LazyImage->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (IsValid(DescriptionRichTextBlock.Get()))
	{
		DescriptionRichTextBlock->SetText(FText::GetEmpty());
	}

	if (IsValid(DynamicDetailsRichTextBlock.Get()))
	{
		DynamicDetailsRichTextBlock->SetText(FText::GetEmpty());
	}

	if (IsValid(DisableReasonRichTextBlock.Get()))
	{
		DisableReasonRichTextBlock->SetText(FText::GetEmpty());
	}
}
