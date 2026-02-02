// copyright iznankai

#pragma once


#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"
#include "ScalarListEntryWidget.generated.h"


class UScalarListDataObject;
class UCommonNumericTextBlock;
class UAnalogSlider;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UScalarListEntryWidget : public UBaseListEntryWidget
{
	GENERATED_BODY()

public:

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativePreConstruct() override;
	virtual void OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject) override;
	virtual void OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData, EOptionsListDataModifyReason OwningModifiedReason)override;

	virtual UWidget* GetWidgetToFocusForGamepad() const override;
	
private:
	UFUNCTION()
	void OnSliderValueChanged(float Value);

	UFUNCTION()
	void OnSliderMouseCaptureBegin();

	virtual void ToggleHighlightState(bool bShouldHighlight) override;
	
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Settings")
	FColor SliderDefaultColor;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Settings")
	FColor SliderHighlightColor;

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UCommonNumericTextBlock> SettingValue;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UAnalogSlider> AnalogSlider;

	UPROPERTY(Transient)
	TObjectPtr<UScalarListDataObject> CachedOwningScalarDataObject;
};
