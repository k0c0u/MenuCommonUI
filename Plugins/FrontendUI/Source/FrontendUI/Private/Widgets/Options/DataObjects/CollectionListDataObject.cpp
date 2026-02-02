// copyright iznankai


#include "Widgets/Options/DataObjects/CollectionListDataObject.h"

void UCollectionListDataObject::AddChildListData(UBaseListDataObject* InChildListData)
{
	InChildListData->InitDataObject();
	InChildListData->SetParentData(this);
	ChildListDataArray.Add(MoveTemp(InChildListData));
}

TArray<TObjectPtr<UBaseListDataObject>> UCollectionListDataObject::GetAllChildListData() const
{
	return ChildListDataArray;
}

bool UCollectionListDataObject::HasAnyChildListData() const
{
	return !ChildListDataArray.IsEmpty();
}
