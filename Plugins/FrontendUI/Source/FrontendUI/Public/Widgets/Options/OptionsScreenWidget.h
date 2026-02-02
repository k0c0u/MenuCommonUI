// copyright iznankai

#pragma once


#include "Widgets/BaseActivatableWidget.h"
#include "FrontendEnumTypes.h"
#include "OptionsScreenWidget.generated.h"


class UBaseListDataObject;
class UOptionsDetailsViewWidget;
class UFrontendTabListWidgetBase;
class UOptionsDataRegistry;
class UFrontendCommonListView;

UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UOptionsScreenWidget : public UBaseActivatableWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnOptionsTabSelected(FName TabID);
	
	//~ Begin UUserWidget Interface
	virtual void NativeOnInitialized() override;
	//~ End UUserWidget Interface

	//~ Begin UCommonActivatableWidget Interface
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	//~ End UCommonActivatableWidget Interface

private:
	const TObjectPtr<UOptionsDataRegistry>& GetOrCreateDataRegistry();
	void OnResetBoundActionTriggered();
	void OnBackBoundActionTriggered();

	void OnListViewItemHovered(UObject* InHoveredItem, bool bWasHovered);
	void OnListViewItemSelected(UObject* InSelectedItem);

	FString TryGetEntryWidgetClassName(UObject* InOwningListItem);
	
	void OnListViewDataModified(UBaseListDataObject* ModifiedData, EOptionsListDataModifyReason ModifiedReason);
	
private:
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UFrontendTabListWidgetBase> OptionsTabListWidget;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UFrontendCommonListView> OptionsListView;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UOptionsDetailsViewWidget> DetailsViewListEntryInfo;

	UPROPERTY(Transient)
	TObjectPtr<UOptionsDataRegistry> CreatedOwningDataRegistry;

	UPROPERTY(EditDefaultsOnly, Category = "Frontend Options Screen", meta = (RowType = "/Script/CommonUI.CommonInputActionDataBase"))
	FDataTableRowHandle ResetAction;

	FUIActionBindingHandle ResetActionHandle;

	UPROPERTY(Transient)
	TArray<UBaseListDataObject*> ResettableDataArray;

	bool bIsResettingData = false;
};
