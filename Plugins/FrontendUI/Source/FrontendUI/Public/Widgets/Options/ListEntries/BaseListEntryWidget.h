// copyright iznankai

#pragma once

#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FrontendEnumTypes.h"
#include "BaseListEntryWidget.generated.h"


class UCommonTextBlock;
class UBaseListDataObject;
class UCommonTextStyle;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UBaseListEntryWidget : public UCommonUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

public:
	virtual void NativeOnListEntryWidgetHovered(bool bWasHovered);

	virtual void NativeOnItemSelectionChanged(bool bIsSelected) override;

	FORCEINLINE TObjectPtr<UCommonTextBlock> GetSettingDisplayName () const { return SettingDisplayName; }

	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

	virtual void NativeOnEntryReleased() override;
	
protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

	virtual void OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject);

	virtual void OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
	EOptionsListDataModifyReason OwningModifiedReason);

	virtual void OnOwningDependencyDataObjectModified(UBaseListDataObject* OwningModifiedDependencyData,
	EOptionsListDataModifyReason OwningModifiedReason);

	void SelectedThisEntryWidget();
	
	virtual UWidget* GetWidgetToFocusForGamepad() const;

	virtual void ToggleHighlightState(bool bShouldHighlight);

	// 
	virtual void OnToggleEditableState(bool bIsEditable);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	TSubclassOf<UCommonTextStyle> DefaultTextStyle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	TSubclassOf<UCommonTextStyle> HighlighTextStyle;

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional, AllowPrivateAccess = "true"))
	TObjectPtr<UCommonTextBlock> SettingDisplayName;

	UPROPERTY(Transient)
	TWeakObjectPtr<UBaseListDataObject> CachedOwningDataObject;
};
