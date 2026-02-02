// copyright iznankai

#pragma once

#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "CollectionListDataObject.generated.h"




UCLASS()
class FRONTENDUI_API UCollectionListDataObject : public UBaseListDataObject
{
	GENERATED_BODY()

public:
	void AddChildListData(UBaseListDataObject* InChildListData);
	
	// Begin UBaseListDataObject Interface
	virtual TArray<TObjectPtr<UBaseListDataObject>> GetAllChildListData() const override;
	virtual bool HasAnyChildListData() const override;
	// End UBaseListDataObject Interface
	
private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UBaseListDataObject>> ChildListDataArray;
};
