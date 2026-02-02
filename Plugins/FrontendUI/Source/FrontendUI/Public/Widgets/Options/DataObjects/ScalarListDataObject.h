// copyright iznankai

#pragma once


#include "Widgets/Options/DataObjects/ValueListDataObject.h"
#include "CommonNumericTextBlock.h"
#include "ScalarListDataObject.generated.h"



UCLASS()
class FRONTENDUI_API UScalarListDataObject : public UValueListDataObject
{
	GENERATED_BODY()

public:
	LIST_DATA_ACCESSOR(TRange<float>, DisplayValueRange)
	LIST_DATA_ACCESSOR(TRange<float>, OutputValueRange)
	LIST_DATA_ACCESSOR(float, SliderStepSize)
	LIST_DATA_ACCESSOR(ECommonNumericType, DisplayNumericType)
	LIST_DATA_ACCESSOR(FCommonNumberFormattingOptions, NumberFormattingOptions)

	static FCommonNumberFormattingOptions NoDecimal();
	static FCommonNumberFormattingOptions WithDecimal(int32 NumFracDigit);

	float GetCurrentValue() const;
	void SetCurrentValueFromSlider(float InNewValue);

private:
	float StringToFloat(const FString& InString) const;

	//~ Begin UBaseListDataObject Interface
	virtual bool CanResetBackToDefaultValue() const override;
	virtual bool TryResetBackToDefaultValue() override;
	//~ End UBaseListDataObject Interface

	virtual void OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData, EOptionsListDataModifyReason ModifiedReason = EOptionsListDataModifyReason::Directly) override;
	
private:
	TRange<float> DisplayValueRange = TRange<float>(0.f,1.f);
	TRange<float> OutputValueRange = TRange<float>(0.f,1.f);
	float SliderStepSize = 0.f;
	ECommonNumericType DisplayNumericType =  ECommonNumericType::Number;
	FCommonNumberFormattingOptions NumberFormattingOptions;
};
