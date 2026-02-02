// copyright iznankai


#include "Widgets/Options/ListEntries/ScalarListEntryWidget.h"
#include "AnalogSlider.h"
#include "Widgets/Options/DataObjects/ScalarListDataObject.h"

void UScalarListEntryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	AnalogSlider->OnValueChanged.AddUniqueDynamic(this, &ThisClass::OnSliderValueChanged);
	AnalogSlider->OnMouseCaptureBegin.AddUniqueDynamic(this, &ThisClass::OnSliderMouseCaptureBegin);
}

void UScalarListEntryWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	AnalogSlider->SetSliderBarColor(SliderDefaultColor);
	AnalogSlider->SetSliderHandleColor(SliderDefaultColor);
}

void UScalarListEntryWidget::OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject)
{
	Super::OnOwningListDataObjectSet(InOwningListDataObject);

	CachedOwningScalarDataObject = Cast<UScalarListDataObject>(InOwningListDataObject);
	if (IsValid(CachedOwningScalarDataObject.Get()))
	{
		SettingValue->SetNumericType(CachedOwningScalarDataObject->GetDisplayNumericType());
		SettingValue->FormattingSpecification = CachedOwningScalarDataObject->GetNumberFormattingOptions();
		SettingValue->SetCurrentValue(CachedOwningScalarDataObject->GetCurrentValue());

		AnalogSlider->SetMinValue(CachedOwningScalarDataObject->GetDisplayValueRange().GetLowerBoundValue());
		AnalogSlider->SetMaxValue(CachedOwningScalarDataObject->GetDisplayValueRange().GetUpperBoundValue());
		AnalogSlider->SetStepSize(CachedOwningScalarDataObject->GetSliderStepSize());
		AnalogSlider->SetValue(CachedOwningScalarDataObject->GetCurrentValue());
	}
}

void UScalarListEntryWidget::OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
	EOptionsListDataModifyReason OwningModifiedReason)
{
	if (IsValid(CachedOwningScalarDataObject.Get()))
	{
		SettingValue->SetCurrentValue(CachedOwningScalarDataObject->GetCurrentValue());
		AnalogSlider->SetValue(CachedOwningScalarDataObject->GetCurrentValue());
	}
}

UWidget* UScalarListEntryWidget::GetWidgetToFocusForGamepad() const
{
	return AnalogSlider.Get();
}

void UScalarListEntryWidget::OnSliderValueChanged(float Value)
{
	if (IsValid(CachedOwningScalarDataObject.Get()))
	{
		CachedOwningScalarDataObject->SetCurrentValueFromSlider(Value);
	}
}

void UScalarListEntryWidget::OnSliderMouseCaptureBegin()
{
	SelectedThisEntryWidget();
}

void UScalarListEntryWidget::ToggleHighlightState(bool bShouldHighlight)
{
	Super::ToggleHighlightState(bShouldHighlight);

	if (IsValid(SettingValue.Get()))
	{
		SettingValue->SetStyle(bShouldHighlight ? HighlighTextStyle : DefaultTextStyle);
	}

	if (IsValid(AnalogSlider.Get()))
	{
		AnalogSlider->SetSliderBarColor(bShouldHighlight ? SliderHighlightColor : SliderDefaultColor);
		AnalogSlider->SetSliderHandleColor(bShouldHighlight ? SliderHighlightColor : SliderDefaultColor);
	}
}
