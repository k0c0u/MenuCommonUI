// copyright iznankai

#pragma once


#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"
#include "KeyRemapListEntryWidget.generated.h"

class UFrontendCommonButtonBase;
class UCommonTextBlock;
class UKeyRemapListDataObject;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UKeyRemapListEntryWidget : public UBaseListEntryWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;
	
	//~ Begin UBaseListEntryWidget Interface
	virtual void OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject) override;
	virtual void OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData, EOptionsListDataModifyReason OwningModifiedReason) override;
	//~ End UBaseListEntryWidget Interface

	virtual UWidget* GetWidgetToFocusForGamepad() const override;

private:
	UFUNCTION()
	void OnRemapKeyButtonClicked();

	UFUNCTION()
	void OnResetKeyBindingButtonClicked();

	UFUNCTION()
	void OnKeyToRemapPressed(const FKey& PressedKey);

	UFUNCTION()
	void OnKeyRemapCanceled(const FText& CanceledReason);
	

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> RemapKey;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> ResetKeyBinding;

	UPROPERTY(Transient)
	TWeakObjectPtr<UKeyRemapListDataObject> KeyRemapDataObject;
};
