// copyright iznankai


#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"

#include "CommonInputSubsystem.h"
#include "CommonTextBlock.h"
#include "Components/ListView.h"
#include "Widgets/Options/DataObjects/BaseListDataObject.h"

void UBaseListEntryWidget::NativeOnListEntryWidgetHovered(bool bWasHovered)
{
	if (bWasHovered)
	{
		ToggleHighlightState(true);
	}
	else
	{
		ToggleHighlightState(IsValid(GetListItem()) && IsListItemSelected() ? true : false);
	}
}

void UBaseListEntryWidget::NativeOnItemSelectionChanged(bool bIsSelected)
{
	IUserObjectListEntry::NativeOnItemSelectionChanged(bIsSelected);

	ToggleHighlightState(bIsSelected);
}

FReply UBaseListEntryWidget::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent)
{
	if (UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		if (CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad)
		{
			if (UWidget* WidgetToFocus = GetWidgetToFocusForGamepad())
			{
				if (TSharedPtr<SWidget> SlateWidgetToFocus = WidgetToFocus->GetCachedWidget())
				{
					return FReply::Handled().SetUserFocus(SlateWidgetToFocus.ToSharedRef());
				}
			}
		}
	}

	return Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
}

void UBaseListEntryWidget::NativeOnEntryReleased()
{
	IUserObjectListEntry::NativeOnEntryReleased();

	NativeOnListEntryWidgetHovered(false);
}

void UBaseListEntryWidget::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	IUserObjectListEntry::NativeOnListItemObjectSet(ListItemObject);
	
	OnOwningListDataObjectSet(Cast<UBaseListDataObject>(ListItemObject));
}

void UBaseListEntryWidget::OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject)
{
	if (IsValid(SettingDisplayName))
	{
		SettingDisplayName->SetText(InOwningListDataObject->GetDataDisplayName());
	}
	
	if (!InOwningListDataObject->OnListDataModified.IsBoundToObject(this))
	{
		InOwningListDataObject->OnListDataModified.AddUObject(this, &ThisClass::OnOwningListDataObjectModified);
	}

	if(!InOwningListDataObject->OnDependencyDataModified.IsBoundToObject(this))
	{
		InOwningListDataObject->OnDependencyDataModified.AddUObject(this, &ThisClass::OnOwningDependencyDataObjectModified);
	}

	OnToggleEditableState(InOwningListDataObject->IsDataCurrentlyEditable());

	CachedOwningDataObject = InOwningListDataObject;
}

void UBaseListEntryWidget::OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
	EOptionsListDataModifyReason OwningModifiedReason)
{
}

void UBaseListEntryWidget::OnOwningDependencyDataObjectModified(UBaseListDataObject* OwningModifiedDependencyData,
	EOptionsListDataModifyReason OwningModifiedReason)
{
	if (CachedOwningDataObject.IsValid())
	{
		OnToggleEditableState(CachedOwningDataObject->IsDataCurrentlyEditable());
	}
}

void UBaseListEntryWidget::SelectedThisEntryWidget()
{
	Cast<UListView>(GetOwningListView())->SetSelectedItem(GetListItem());
}

UWidget* UBaseListEntryWidget::GetWidgetToFocusForGamepad() const
{
	return nullptr;
}

void UBaseListEntryWidget::ToggleHighlightState(bool bShouldHighlight)
{
	if (IsValid(SettingDisplayName.Get()))
	{
		SettingDisplayName->SetStyle(bShouldHighlight ? HighlighTextStyle : DefaultTextStyle);
	}
}

void UBaseListEntryWidget::OnToggleEditableState(bool bIsEditable)
{
	if (IsValid(SettingDisplayName.Get()))
	{
		SettingDisplayName->SetIsEnabled(bIsEditable);
	}
}
