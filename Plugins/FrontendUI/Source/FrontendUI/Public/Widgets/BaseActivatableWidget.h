// copyright iznankai

#pragma once


#include "CommonActivatableWidget.h"
#include "BaseActivatableWidget.generated.h"




UCLASS()
class FRONTENDUI_API UBaseActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()


protected:
	UFUNCTION(BlueprintPure)
	APlayerController* GetOwningPlayerController();

private:
	TWeakObjectPtr<APlayerController> CachedOwningPC;
};
