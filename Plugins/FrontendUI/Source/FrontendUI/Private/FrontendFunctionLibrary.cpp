// copyright iznankai


#include "FrontendFunctionLibrary.h"

#include "FontendSettings/FrontendDeveloperSettings.h"
#include "Internationalization/StringTable.h"

TSoftClassPtr<UBaseActivatableWidget> UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag(UPARAM(meta = (Categories = "Frontend.Widget")) FGameplayTag InWidgetTag)
{
	const UFrontendDeveloperSettings* MenuDeveloperSettings = GetDefault<UFrontendDeveloperSettings>();
	if (!IsValid(MenuDeveloperSettings) || !MenuDeveloperSettings->FrontendWidgetMap.Contains(InWidgetTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("UFrontendFunctionLibrary::GetFrontendSoftWidgetClassByTag - Could not find the corresponding widget under the tag %s"), *InWidgetTag.ToString());
		return nullptr;
	}
	
	return MenuDeveloperSettings->FrontendWidgetMap.FindRef(InWidgetTag);
}

TSoftObjectPtr<UTexture2D> UFrontendFunctionLibrary::GetOptionsSoftImageByTag(FGameplayTag InImageTag)
{
	const UFrontendDeveloperSettings* MenuDeveloperSettings = GetDefault<UFrontendDeveloperSettings>();
	if (!IsValid(MenuDeveloperSettings) || !MenuDeveloperSettings->OptionsScreenSoftImageMap.Contains(InImageTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("UFrontendFunctionLibrary::GetOptionsSoftImageByTag - Could not find the corresponding image under the tag %s"), *InImageTag.ToString());
		return nullptr;
	}
	return MenuDeveloperSettings->OptionsScreenSoftImageMap.FindRef(InImageTag);
}