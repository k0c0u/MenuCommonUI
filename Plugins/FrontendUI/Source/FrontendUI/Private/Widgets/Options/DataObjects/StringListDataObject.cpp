// copyright iznankai


#include "Widgets/Options/DataObjects/StringListDataObject.h"

#include "FontendSettings/FrontendDeveloperSettings.h"
#include "Widgets/Options/OptionsDataInteractionHelper.h"

void UStringListDataObject::OnDataObjectInitialized()
{
	if (!AvailableOptionsStringArray.IsEmpty())
	{
		CurrentStringValue = AvailableOptionsStringArray[0];
	}

	if (HasDefaultValue())
	{
		CurrentStringValue = GetDefaultValueAsString();
	}

	if (DataDynamicGetter.IsValid())
	{
		if(!DataDynamicGetter->GetValueAsString().IsEmpty())
		{
			CurrentStringValue = DataDynamicGetter->GetValueAsString();
		}
	}
	
	if (!TrySetDisplayTextFromStringValue(CurrentStringValue))
	{
		CurrentDisplayText = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("InvalidOptionKey")));
	}
}
void UStringListDataObject::AddDynamicOption(const FString& InStringValue, const FText& InTextValue)
{
	AvailableOptionsStringArray.Add(InStringValue);
	AvailableOptionsTextArray.Add(InTextValue);
}

void UStringListDataObject::AdvanceToNextOption()
{
	if (AvailableOptionsStringArray.IsEmpty() || AvailableOptionsTextArray.IsEmpty())
	{
		return;
	}

	const int32 CurrentDisplayIndex = AvailableOptionsStringArray.IndexOfByKey(CurrentStringValue);
	const int32 NextIndexToDisplay = CurrentDisplayIndex + 1;

	if (AvailableOptionsStringArray.IsValidIndex(NextIndexToDisplay))
	{
		CurrentStringValue = AvailableOptionsStringArray[NextIndexToDisplay];
	}
	else
	{
		CurrentStringValue = AvailableOptionsStringArray[0];
	}

	TrySetDisplayTextFromStringValue(CurrentStringValue);

	if (DataDynamicSetter.IsValid())
	{
		DataDynamicSetter->SetValueFromString(CurrentStringValue);

		NotifyListDataModified(this);
	}
}

void UStringListDataObject::BackToPreviousOption()
{
	if (AvailableOptionsStringArray.IsEmpty() || AvailableOptionsTextArray.IsEmpty())
	{
		return;
	}

	const int32 CurrentDisplayIndex = AvailableOptionsStringArray.IndexOfByKey(CurrentStringValue);
	const int32 PreviousIndexToDisplay = CurrentDisplayIndex - 1;

	if (AvailableOptionsStringArray.IsValidIndex(PreviousIndexToDisplay))
	{
		CurrentStringValue = AvailableOptionsStringArray[PreviousIndexToDisplay];
	}
	else
	{
		CurrentStringValue = AvailableOptionsStringArray.Last();
	}

	TrySetDisplayTextFromStringValue(CurrentStringValue);

	if (DataDynamicSetter.IsValid())
	{
		DataDynamicSetter->SetValueFromString(CurrentStringValue);

		NotifyListDataModified(this);
	}
}

bool UStringListDataObject::TrySetDisplayTextFromStringValue(const FString& InStringValue)
{
	const int32 CurrentIndex = AvailableOptionsStringArray.IndexOfByKey(InStringValue);
	if (AvailableOptionsTextArray.IsValidIndex(CurrentIndex))
	{
		CurrentDisplayText = AvailableOptionsTextArray[CurrentIndex];
		return true;
	}
	return false;
}

bool UStringListDataObject::CanResetBackToDefaultValue() const
{
	return HasDefaultValue() && CurrentStringValue != GetDefaultValueAsString();
}

bool UStringListDataObject::TryResetBackToDefaultValue()
{
	if (CanResetBackToDefaultValue())
	{
		CurrentStringValue = GetDefaultValueAsString();

		TrySetDisplayTextFromStringValue(CurrentStringValue);

		if (DataDynamicSetter.IsValid())
		{
			DataDynamicSetter->SetValueFromString(CurrentStringValue);
			NotifyListDataModified(this, EOptionsListDataModifyReason::ResetToDefault);
			return true;
		}
	}
	return false;
}

bool UStringListDataObject::CanSetToForcedStringValue(const FString& InForcedValue) const
{
	return CurrentStringValue != InForcedValue;
}

void UStringListDataObject::OnSetToForcedStringValue(const FString& InForcedValue)
{
	CurrentStringValue = InForcedValue;
	TrySetDisplayTextFromStringValue(CurrentStringValue);
	if (DataDynamicSetter.IsValid())
	{
		DataDynamicSetter->SetValueFromString(CurrentStringValue);
		NotifyListDataModified(this, EOptionsListDataModifyReason::Dependency);
	}
}

void UStringListDataObject::OnRotatorInitiatedValueChange(const FText& InNewSelectedText)
{
	const int32 FoundIndex = AvailableOptionsTextArray.IndexOfByPredicate(
		[InNewSelectedText](const FText& AvailableText)->bool
		{
			return AvailableText.EqualTo(InNewSelectedText);
		}
	);

	if (FoundIndex != INDEX_NONE && AvailableOptionsStringArray.IsValidIndex(FoundIndex))
	{
		CurrentDisplayText = InNewSelectedText;
		CurrentStringValue = AvailableOptionsStringArray[FoundIndex];

		if (DataDynamicSetter.IsValid())
		{
			DataDynamicSetter->SetValueFromString(CurrentStringValue);
			NotifyListDataModified(this);
		}
	}
}

//************* UStringBoolListDataObject *************//

void UStringBoolListDataObject::OverrideTrueDisplayText(const FText& InNewTrueDisplayText)
{
	if (!AvailableOptionsStringArray.Contains(TrueString))
	{
		AddDynamicOption(TrueString, InNewTrueDisplayText);
	}
}

void UStringBoolListDataObject::OverrideFalseDisplayText(const FText& InNewFalseDisplayText)
{
	if (!AvailableOptionsStringArray.Contains(FalseString))
	{
		AddDynamicOption(FalseString, InNewFalseDisplayText);
	}
}

void UStringBoolListDataObject::SetTrueAsDefaultValue()
{
	SetDefaultValueFromString(TrueString);
}

void UStringBoolListDataObject::SetFalseAsDefaultValue()
{
	SetDefaultValueFromString(FalseString);
}

void UStringBoolListDataObject::TryInitBoolValues()
{
	if (!AvailableOptionsStringArray.Contains(TrueString))
	{
		AddDynamicOption(TrueString, UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("ONKey"))));
	}

	if (!AvailableOptionsStringArray.Contains(FalseString))
	{
		AddDynamicOption(FalseString, UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("OFFKey"))));
	}
}

void UStringBoolListDataObject::OnDataObjectInitialized()
{
	TryInitBoolValues();
	
	Super::OnDataObjectInitialized();
}
//************* UStringBoolListDataObject *************//

//************* UStringIntegerListDataObject *************//
void UStringIntegerListDataObject::OnDataObjectInitialized()
{
	Super::OnDataObjectInitialized();

	if (!TrySetDisplayTextFromStringValue(CurrentStringValue))
	{
		CurrentDisplayText = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("CustomKey")));
	}
}

void UStringIntegerListDataObject::OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData,
	EOptionsListDataModifyReason ModifiedReason)
{
	if (DataDynamicGetter.IsValid())
	{
		if (CurrentStringValue == DataDynamicGetter->GetValueAsString())
		{
			return;
		}
		
		CurrentStringValue = DataDynamicGetter->GetValueAsString();

		if (!TrySetDisplayTextFromStringValue(CurrentStringValue))
		{
			CurrentDisplayText = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("CustomKey")));
		}

		NotifyListDataModified(this, EOptionsListDataModifyReason::Dependency);
	}

	Super::OnEditDependencyDataModified(ModifiedDependencyData, ModifiedReason);
}

void UStringIntegerListDataObject::AddIntegerOption(int32 InIntegerValue, const FText& InDisplayText)
{
	AddDynamicOption(LexToString(InIntegerValue), InDisplayText);
}

//************* UStringIntegerListDataObject *************//
