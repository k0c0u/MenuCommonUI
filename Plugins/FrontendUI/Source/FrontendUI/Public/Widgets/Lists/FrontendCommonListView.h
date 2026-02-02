// copyright iznankai

#pragma once

#include "CoreMinimal.h"
#include "CommonListView.h"

#include "FrontendCommonListView.generated.h"

class UDataListEntryMapping;
 

UCLASS()
class FRONTENDUI_API UFrontendCommonListView : public UCommonListView
{
	GENERATED_BODY()

public:
	
protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;
	virtual bool OnIsSelectableOrNavigableInternal(UObject* FirstSelectedItem) override;
	
private:

#if WITH_EDITOR
	virtual void ValidateCompiledDefaults(class IWidgetCompilerLog& CompileLog) const override;
#endif

private:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Settings", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDataListEntryMapping> DataListEntryMapping;
};
