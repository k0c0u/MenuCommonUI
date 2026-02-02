// copyright iznankai


#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "FontendSettings/FrontendGameUserSettings.h"

void UBaseListDataObject::InitDataObject()
{
	OnDataObjectInitialized();
}

void UBaseListDataObject::AddEditCondition(const FOptionsDataEditConditionDescription& InEditCondition)
{
	EditConditionDescArray.Add(InEditCondition);
}

bool UBaseListDataObject::IsDataCurrentlyEditable()
{
	bool bIsEditable = true;
	if (EditConditionDescArray.IsEmpty())
	{
		return bIsEditable;
	}

	FString CachedDisabledRichReason;
	for (const FOptionsDataEditConditionDescription& Condition : EditConditionDescArray)
	{
		if (!Condition.IsValid() || Condition.IsEditConditionMet())
		{
			continue;
		}

		bIsEditable = false;
		CachedDisabledRichReason.Append(Condition.GetDisabledRichReason());
		SetDisableText(FText::FromString(CachedDisabledRichReason));

		if (Condition.HasForcedStringValue())
		{
			const FString ForcedStringValue = Condition.GetDisabledForcedStringValue();

			if (CanSetToForcedStringValue(ForcedStringValue))
			{
				OnSetToForcedStringValue(ForcedStringValue);
			}
		}
	}

	return bIsEditable;
}

void UBaseListDataObject::AddEditDependencyData(UBaseListDataObject* InDependencyData)
{
	if (IsValid(InDependencyData) && !InDependencyData->OnListDataModified.IsBoundToObject(this))
	{
		InDependencyData->OnListDataModified.AddUObject(this, &ThisClass::OnEditDependencyDataModified);
	}
}

void UBaseListDataObject::OnDataObjectInitialized()
{
}

void UBaseListDataObject::NotifyListDataModified(UBaseListDataObject* ModifiedData,
	EOptionsListDataModifyReason ModifiedReason)
{
	OnListDataModified.Broadcast(ModifiedData, ModifiedReason);

	if(bShouldApplyChangeImmediately)
	{
		UFrontendGameUserSettings::Get()->ApplySettings(true);
	}
}

void UBaseListDataObject::OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData,
	EOptionsListDataModifyReason ModifiedReason)
{
	OnDependencyDataModified.Broadcast(ModifiedDependencyData, ModifiedReason);
}