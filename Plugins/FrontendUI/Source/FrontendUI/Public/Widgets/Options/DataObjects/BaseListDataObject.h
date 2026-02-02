// copyright iznankai

#pragma once

#include "UObject/NoExportTypes.h"
#include "FrontendEnumTypes.h"
#include "FrontendStructTypes.h"
#include "BaseListDataObject.generated.h"

#define LIST_DATA_ACCESSOR(DataType, PropertyName) \
	FORCEINLINE DataType Get##PropertyName() const {return PropertyName;} \
	void Set##PropertyName(DataType In##PropertyName) {PropertyName = In##PropertyName;}

UCLASS(Abstract)
class FRONTENDUI_API UBaseListDataObject : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnListDataModifiedDelegat, UBaseListDataObject*,
	                                     EOptionsListDataModifyReason);
	FOnListDataModifiedDelegat OnListDataModified;
	FOnListDataModifiedDelegat OnDependencyDataModified;


	LIST_DATA_ACCESSOR(FName, DataID);
	LIST_DATA_ACCESSOR(FText, DataDisplayName);
	LIST_DATA_ACCESSOR(FText, DescriptionText);
	LIST_DATA_ACCESSOR(FText, DisableText);
	LIST_DATA_ACCESSOR(TSoftObjectPtr<UTexture2D>, SoftDescriptionImage);
	LIST_DATA_ACCESSOR(TObjectPtr<UBaseListDataObject>, ParentData);

	void InitDataObject();

	// Empty in base class.
	virtual TArray<TObjectPtr<UBaseListDataObject>> GetAllChildListData() const
	{
		return TArray<TObjectPtr<UBaseListDataObject>>();
	}

	virtual bool HasAnyChildListData() const { return false; }

	void SetShouldApplyChangeImmediately(bool NewValue) { bShouldApplyChangeImmediately = NewValue; }

	// For resetting the data
	virtual bool HasDefaultValue() const { return false; }
	virtual bool CanResetBackToDefaultValue() const { return false; }
	virtual bool TryResetBackToDefaultValue() { return false; }

	//Gets called from OptionDataRegister
	void AddEditCondition(const FOptionsDataEditConditionDescription& InEditCondition);

	bool IsDataCurrentlyEditable();

	void AddEditDependencyData(UBaseListDataObject* InDependencyData);

protected:
	// Empty in base class. The child classes override it.
	virtual void OnDataObjectInitialized();

	virtual void NotifyListDataModified(UBaseListDataObject* ModifiedData,
	                                    EOptionsListDataModifyReason ModifiedReason =
		                                    EOptionsListDataModifyReason::Directly);

	virtual bool CanSetToForcedStringValue(const FString& InForcedValue) const { return false; }

	virtual void OnSetToForcedStringValue(const FString& InForcedValue){}

	//This func will be called when the value of the data has changed. The child class can override this func/ Super call is expected.
	virtual void OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData,
	                                         EOptionsListDataModifyReason ModifiedReason =
		                                         EOptionsListDataModifyReason::Directly);

private:
	FName DataID;
	FText DataDisplayName;
	FText DescriptionText;
	FText DisableText;
	TSoftObjectPtr<UTexture2D> SoftDescriptionImage;

	UPROPERTY(Transient)
	TObjectPtr<UBaseListDataObject> ParentData;

	bool bShouldApplyChangeImmediately = false;

	UPROPERTY(Transient)
	TArray<FOptionsDataEditConditionDescription> EditConditionDescArray;
};
