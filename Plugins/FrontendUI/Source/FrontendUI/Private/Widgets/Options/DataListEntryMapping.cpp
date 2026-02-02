// copyright iznankai


#include "Widgets/Options/DataListEntryMapping.h"

#include "Widgets/Options/DataObjects/BaseListDataObject.h"

TSubclassOf<UBaseListEntryWidget> UDataListEntryMapping::FindEntryWidgetClassByDataObject(
	UBaseListDataObject* InDataObject) const
{
	if (IsValid(InDataObject))
	{
		for (UClass* DataObjectClass = InDataObject->GetClass(); DataObjectClass; DataObjectClass = DataObjectClass->GetSuperClass())
		{
			if (IsValid(DataObjectClass))
			{
				TSubclassOf<UBaseListDataObject> ConvertDataClass = TSubclassOf<UBaseListDataObject>(DataObjectClass);
				if (DataObjectListEntryMap.Contains(ConvertDataClass))
				{
					return DataObjectListEntryMap.FindRef(ConvertDataClass);
				}
			}
		}
	}
	return TSubclassOf<UBaseListEntryWidget>();
}
