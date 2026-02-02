// copyright iznankai

#pragma once


#include "UserSettings/EnhancedInputUserSettings.h"
#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "CommonInputTypeEnum.h"
#include "KeyRemapListDataObject.generated.h"


class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;

UCLASS()
class FRONTENDUI_API UKeyRemapListDataObject : public UBaseListDataObject
{
	GENERATED_BODY()

public:
	void InitKeyRemapData(UEnhancedInputUserSettings* InOwningInputUserSettings,
	                      UEnhancedPlayerMappableKeyProfile* InOwningPlayerMappableKeyProfile,
	                      ECommonInputType InDesiredInputKeyType, const FPlayerKeyMapping& InOwningKeyMapping);

	FSlateBrush GetIconFromCurrentKey() const;

	FORCEINLINE ECommonInputType GetDesiredInputKeyType() const {return CachedDesiredInputKeyType;}

	void BindNewInputKey(const FKey& NewInputKey);

	virtual bool HasDefaultValue() const override;
	virtual bool CanResetBackToDefaultValue() const override;
	virtual bool TryResetBackToDefaultValue() override;

private:
	FPlayerKeyMapping* GetOwningKeyMapping() const;
	
private:
	UPROPERTY(Transient)
	TWeakObjectPtr<UEnhancedInputUserSettings> CachedOwningInputUserSettings;

	UPROPERTY(Transient)
	TWeakObjectPtr<UEnhancedPlayerMappableKeyProfile> CachedOwningPlayerMappableKeyProfile;

	ECommonInputType CachedDesiredInputKeyType;

	FName CachedOwningMappingName;

	EPlayerMappableKeySlot CachedOwningMappableKeySlot;
};
