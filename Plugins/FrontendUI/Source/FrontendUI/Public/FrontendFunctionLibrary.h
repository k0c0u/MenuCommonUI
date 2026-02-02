// copyright iznankai

#pragma once


#include "Kismet/BlueprintFunctionLibrary.h"
#include "FrontendFunctionLibrary.generated.h"


struct FGameplayTag;
class UBaseActivatableWidget;
 
UCLASS()
class FRONTENDUI_API UFrontendFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Frontend Function Library")
	static TSoftClassPtr<UBaseActivatableWidget> GetFrontendSoftWidgetClassByTag( UPARAM(meta = (Categories = "Frontend.Widget")) FGameplayTag InWidgetTag);

	UFUNCTION(BlueprintPure, Category = "Frontend Function Library")
	static TSoftObjectPtr<UTexture2D> GetOptionsSoftImageByTag( UPARAM(meta = (Categories = "Frontend.Image")) FGameplayTag InImageTag);
};
