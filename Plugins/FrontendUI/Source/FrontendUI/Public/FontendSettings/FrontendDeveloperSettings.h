// copyright iznankai

#pragma once

#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "FrontendDeveloperSettings.generated.h"

class UBaseActivatableWidget;
class UStringTable;

UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "Frontend UI Settings"))
class FRONTENDUI_API UFrontendDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	static const UFrontendDeveloperSettings* Get();

	FText FindTextByStringTableKey(const FName& Key) const;
	FName NormalizeCultureName(const FName& Culture) const;
	const FName& GeLocalizationTableId() const {return CachedTableId;}

	void SetLocalizationTableId(const FName& NewName) {CachedTableId = NewName;}

	const TSoftObjectPtr<UStringTable>& GetMenuLocalizationStringTable() const {return MenuLocalizationStringTable;}

	//FText GetTextByKey(const FName& InKey) const;

private:
	//void BuildCacheIfNeeded() const;
	//FText GetTextFromCulture(const FName& Culture, const FName& Key) const;

public:
	UPROPERTY(Config, EditAnywhere, Category = "Widget Reference", meta = (ForceInlineRow, Categories = "Frontend.Widget"))
	TMap<FGameplayTag,TSoftClassPtr<UBaseActivatableWidget> > FrontendWidgetMap;

	UPROPERTY(Config, EditAnywhere, Category = "Options Image Reference", meta = (ForceInlineRow, Categories = "Frontend.Image"))
	TMap<FGameplayTag,TSoftObjectPtr<UTexture2D>> OptionsScreenSoftImageMap;

	UPROPERTY(Config, EditAnywhere, Category = "Localization", meta = (ForceInlineRow))
	TSoftObjectPtr<UStringTable> MenuLocalizationStringTable;
	
	UPROPERTY(Config, EditAnywhere, Category = "Localization", meta = (ForceInlineRow))
	TMap<FName, TSoftObjectPtr<UStringTable>> CultureToStringTable;

	UPROPERTY(EditAnywhere, Category="Localization", meta = (ForceInlineRow))
	FName DefaultCulture = "en";//NormalizeCultureName(FName(*FPlatformMisc::GetDefaultLanguage()));

private:
	mutable TMap<FName, FName> CachedTableIds;

	mutable FName CachedTableId = NAME_None;
};
