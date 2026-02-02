// copyright iznankai

#pragma once

#include "UObject/NoExportTypes.h"
#include "OptionsDataRegistry.generated.h"


class UBaseListDataObject;
class UCollectionListDataObject;

UCLASS()
class FRONTENDUI_API UOptionsDataRegistry : public UObject
{
	GENERATED_BODY()

public:
	//GEts called by options screen Right after object of type UOptionsDataRegistry is created
	void InitOptionsDataRegistry(ULocalPlayer* InOwningLocalPlayer);

	const TArray<TObjectPtr<UCollectionListDataObject>>& GetRegisteredOptionsTabCollection() const {return RegisteredOptionsTabCollection;}

	TArray<TObjectPtr<UBaseListDataObject>> GetListSourceItemBySelectedTabID(const FName& InSelectedTabID) const;
	
private:
	void InitGameplayCollectionTab();
	void InitAudioCollectionTab();
	void InitVideoCollectionTab();
	void InitControlCollectionTab(ULocalPlayer* InOwningLocalPlayer);

	void FindChildListDataRecursively(UBaseListDataObject* InParentData, TArray<TObjectPtr<UBaseListDataObject>>& OutFoundChildListData) const;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UCollectionListDataObject>> RegisteredOptionsTabCollection;
};
