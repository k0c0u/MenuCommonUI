// copyright iznankai


#include "Widgets/Options/DataObjects/ScalarListDataObject.h"
#include "Widgets/Options/OptionsDataInteractionHelper.h"

FCommonNumberFormattingOptions UScalarListDataObject::NoDecimal()
{
	FCommonNumberFormattingOptions Options;
	Options.MaximumFractionalDigits = 0;

	return Options;
}

FCommonNumberFormattingOptions UScalarListDataObject::WithDecimal(int32 NumFracDigit)
{
	FCommonNumberFormattingOptions Options;
	Options.MaximumFractionalDigits = NumFracDigit;

	return Options;
}

float UScalarListDataObject::GetCurrentValue() const
{
	if (DataDynamicGetter.IsValid())
	{
		return FMath::GetMappedRangeValueClamped(OutputValueRange, DisplayValueRange,
		                                         StringToFloat(DataDynamicGetter->GetValueAsString()));
	}
	return 0.f;
}

void UScalarListDataObject::SetCurrentValueFromSlider(float InNewValue)
{
	if (DataDynamicSetter.IsValid())
	{
		const float ClampedValue = FMath::GetMappedRangeValueClamped(DisplayValueRange, OutputValueRange, InNewValue);
		
		DataDynamicSetter->SetValueFromString(LexToString(ClampedValue));

		NotifyListDataModified(this);
	}
}

float UScalarListDataObject::StringToFloat(const FString& InString) const
{
	float OutConvertedValue = 0.f;
	LexFromString(OutConvertedValue, *InString);
	return OutConvertedValue;
}

bool UScalarListDataObject::CanResetBackToDefaultValue() const
{
	if (HasDefaultValue() && DataDynamicGetter.IsValid())
	{
		const float DefaultValue = StringToFloat(GetDefaultValueAsString());
		const float CurrentValue = StringToFloat(DataDynamicGetter->GetValueAsString());

		return !FMath::IsNearlyEqual(DefaultValue, CurrentValue, 0.01f);
	}
	return false;
}

bool UScalarListDataObject::TryResetBackToDefaultValue()
{
	if (CanResetBackToDefaultValue())
	{
		if (DataDynamicSetter)
		{
			DataDynamicSetter->SetValueFromString(GetDefaultValueAsString());

			NotifyListDataModified(this, EOptionsListDataModifyReason::ResetToDefault);
			return true;
		}
	}
	return false;
}

void UScalarListDataObject::OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData,
	EOptionsListDataModifyReason ModifiedReason)
{
	NotifyListDataModified(this, EOptionsListDataModifyReason::Dependency);
	
	Super::OnEditDependencyDataModified(ModifiedDependencyData, ModifiedReason);
}
