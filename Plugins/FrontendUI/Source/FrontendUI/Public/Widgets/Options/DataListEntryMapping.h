// copyright iznankai

#pragma once


#include "Engine/DataAsset.h"
#include "DataListEntryMapping.generated.h"

class UBaseListEntryWidget;
class UBaseListDataObject;


UCLASS()
class FRONTENDUI_API UDataListEntryMapping : public UDataAsset
{
	GENERATED_BODY()
public:
	TSubclassOf<UBaseListEntryWidget> FindEntryWidgetClassByDataObject(UBaseListDataObject* InDataObject) const;
	
private:
	UPROPERTY(EditDefaultsOnly)
	TMap<TSubclassOf<UBaseListDataObject>, TSubclassOf<UBaseListEntryWidget>> DataObjectListEntryMap;
};
