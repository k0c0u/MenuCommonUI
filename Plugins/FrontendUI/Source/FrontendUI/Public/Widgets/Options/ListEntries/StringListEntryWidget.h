// copyright iznankai

#pragma once

#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"
#include "StringListEntryWidget.generated.h"

class UBaseListDataObject;
class UFrontendCommonRotator;
class UFrontendCommonButtonBase;
class UStringListDataObject;
class UCommonTextBlock;


UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UStringListEntryWidget : public UBaseListEntryWidget
{
	GENERATED_BODY()

public:
	virtual void ToggleHighlightState(bool bShouldHighlight) override;

protected:
	virtual void NativeOnInitialized() override;
	
	virtual void OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject) override;
	virtual void OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
	EOptionsListDataModifyReason OwningModifiedReason)override;

	virtual void OnToggleEditableState(bool bIsEditable) override;

	virtual UWidget* GetWidgetToFocusForGamepad() const override;

private:
	void OnPreviousOptionButtonClicked();
	void OnNextOptionButtonClicked();

	void OnRotatorValueChanged(int32 Value, bool bUserInitiated);

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> NextOption;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> PreviousOption;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonRotator> AvailableOptions;

	UPROPERTY(Transient)
	TObjectPtr<UStringListDataObject> CachedStringDataObject;
	
};
