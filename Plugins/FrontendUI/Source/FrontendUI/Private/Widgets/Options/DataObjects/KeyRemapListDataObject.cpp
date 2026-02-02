// copyright iznankai


#include "Widgets/Options/DataObjects/KeyRemapListDataObject.h"

#include "CommonInputBaseTypes.h"
#include "CommonInputSubsystem.h"

void UKeyRemapListDataObject::InitKeyRemapData(UEnhancedInputUserSettings* InOwningInputUserSettings,
                                               UEnhancedPlayerMappableKeyProfile* InOwningPlayerMappableKeyProfile,
                                               ECommonInputType InDesiredInputKeyType,
                                               const FPlayerKeyMapping& InOwningKeyMapping)
{
	CachedOwningInputUserSettings = InOwningInputUserSettings;
	CachedOwningPlayerMappableKeyProfile = InOwningPlayerMappableKeyProfile;
	CachedDesiredInputKeyType = InDesiredInputKeyType;
	CachedOwningMappingName = InOwningKeyMapping.GetMappingName();
	CachedOwningMappableKeySlot = InOwningKeyMapping.GetSlot();
}

FSlateBrush UKeyRemapListDataObject::GetIconFromCurrentKey() const
{
	FSlateBrush FoundBrush;
	if (GetOwningKeyMapping() != nullptr && CachedOwningInputUserSettings.IsValid())
	{
		if (UCommonInputSubsystem* CommonInputSubsystem = UCommonInputSubsystem::Get(
				CachedOwningInputUserSettings->GetLocalPlayer()))
		{
			
			const bool bHasFoundBrush = UCommonInputPlatformSettings::Get()->TryGetInputBrush(
				FoundBrush, GetOwningKeyMapping()->GetCurrentKey(), CachedDesiredInputKeyType,
				CommonInputSubsystem->GetCurrentGamepadName());

			if (!bHasFoundBrush)
			{
				
			}
		}
	}

	return FoundBrush;
}

void UKeyRemapListDataObject::BindNewInputKey(const FKey& NewInputKey)
{
	if (CachedOwningInputUserSettings.IsValid())
	{
		FMapPlayerKeyArgs PlayerKeyArgs;
		PlayerKeyArgs.MappingName = CachedOwningMappingName;
		PlayerKeyArgs.Slot = CachedOwningMappableKeySlot;
		PlayerKeyArgs.NewKey = NewInputKey;

		FGameplayTagContainer Container;
		CachedOwningInputUserSettings->MapPlayerKey(PlayerKeyArgs, Container);
		CachedOwningInputUserSettings->SaveSettings();

		NotifyListDataModified(this);
	}
}

FPlayerKeyMapping* UKeyRemapListDataObject::GetOwningKeyMapping() const
{
	if (CachedOwningPlayerMappableKeyProfile.IsValid())
	{
		FMapPlayerKeyArgs KeyArgs;
		KeyArgs.MappingName = CachedOwningMappingName;
		KeyArgs.Slot = CachedOwningMappableKeySlot;

		return CachedOwningPlayerMappableKeyProfile->FindKeyMapping(KeyArgs);
	}
	return nullptr;
}

bool UKeyRemapListDataObject::HasDefaultValue() const
{
	return GetOwningKeyMapping()->GetDefaultKey().IsValid();
}

bool UKeyRemapListDataObject::CanResetBackToDefaultValue() const
{
	return HasDefaultValue() && GetOwningKeyMapping()->IsCustomized();
}

bool UKeyRemapListDataObject::TryResetBackToDefaultValue()
{
	if (CanResetBackToDefaultValue() && CachedOwningInputUserSettings.IsValid())
	{
		GetOwningKeyMapping()->ResetToDefault();

		CachedOwningInputUserSettings->SaveSettings();

		NotifyListDataModified(this, EOptionsListDataModifyReason::ResetToDefault);
		
		return true;
	}
	return false;
}
