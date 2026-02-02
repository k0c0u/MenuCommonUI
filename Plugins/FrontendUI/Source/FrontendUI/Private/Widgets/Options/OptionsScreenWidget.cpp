// copyright iznankai


#include "Widgets/Options/OptionsScreenWidget.h"
#include "Input/CommonUIInputTypes.h"
#include "ICommonInputModule.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "Widgets/Lists/FrontendCommonListView.h"
#include "Widgets/Lists/FrontendTabListWidgetBase.h"
#include "Widgets/Options/OptionsDataRegistry.h"
#include "Widgets/Options/DataObjects/CollectionListDataObject.h"
#include "FontendSettings/FrontendGameUserSettings.h"
#include "Subsystems/FrontendUISubsystem.h"
#include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "Widgets/Options/OptionsDetailsViewWidget.h"
#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"



void UOptionsScreenWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
	if (!ResetAction.IsNull())
	{
		ResetActionHandle = RegisterUIActionBinding(
			FBindUIActionArgs(
				ResetAction,
				true,
				FSimpleDelegate::CreateUObject(this, &ThisClass::OnResetBoundActionTriggered)
			)
		);
	}

	RegisterUIActionBinding(
		FBindUIActionArgs(
			ICommonInputModule::GetSettings().GetDefaultBackAction(),
			true,
			FSimpleDelegate::CreateUObject(this, &ThisClass::OnBackBoundActionTriggered)
		)
	);

	if (IsValid(OptionsTabListWidget))
	{
		OptionsTabListWidget->OnTabSelected.AddUniqueDynamic(this, &ThisClass::OnOptionsTabSelected);
	}

	if (IsValid(OptionsListView))
	{
		OptionsListView->OnItemIsHoveredChanged().AddUObject(this, &ThisClass::OnListViewItemHovered);
		OptionsListView->OnItemSelectionChanged().AddUObject(this, &ThisClass::OnListViewItemSelected);
	}
}

void UOptionsScreenWidget::NativeOnActivated()
{
	Super::NativeOnActivated();

	if (IsValid(GetOrCreateDataRegistry()))
	{
		for (UCollectionListDataObject* TabCollection : GetOrCreateDataRegistry()->GetRegisteredOptionsTabCollection())
		{
			if (!IsValid(TabCollection))
			{
				continue;
			}

			const FName TabID = TabCollection->GetDataID();
			
			if (IsValid(OptionsTabListWidget))
			{
				if (OptionsTabListWidget->GetTabButtonBaseByID(TabID) != nullptr)
				{
					continue;
				}

				OptionsTabListWidget->RequestRegisterTab(TabID, TabCollection->GetDataDisplayName());
			}
		}
	}
}

void UOptionsScreenWidget::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	UFrontendGameUserSettings::Get()->ApplySettings(true);
}

UWidget* UOptionsScreenWidget::NativeGetDesiredFocusTarget() const
{
	if (UObject* SelectedItem = OptionsListView->GetSelectedItem())
	{
		if (UUserWidget* EntryWidget = OptionsListView->GetEntryWidgetFromItem(SelectedItem))
		{
			return EntryWidget;
		}
	}
	return Super::NativeGetDesiredFocusTarget();
}

const TObjectPtr<UOptionsDataRegistry>& UOptionsScreenWidget::GetOrCreateDataRegistry()
{
	if (!IsValid(CreatedOwningDataRegistry))
	{
		CreatedOwningDataRegistry = NewObject<UOptionsDataRegistry>();
		CreatedOwningDataRegistry->InitOptionsDataRegistry(GetOwningLocalPlayer());
	}
	return CreatedOwningDataRegistry;
}

void UOptionsScreenWidget::OnResetBoundActionTriggered()
{
	if (ResettableDataArray.IsEmpty())
	{
		return;
	}

	if (UCommonButtonBase* SelectedTabButton = OptionsTabListWidget->GetTabButtonBaseByID(OptionsTabListWidget->GetActiveTab()))
	{
		const FString SelectedTabButtonName = Cast<UFrontendCommonButtonBase>(SelectedTabButton)->GetButtonDisplayText().ToString();

		TArray<FText> Args;
		Args.Add(UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("AcceptResetKey"))));
		Args.Add(FText::FromString(SelectedTabButtonName));
		
		UFrontendUISubsystem::Get(this)->PushConfirmScreenToModalStackAsync(
			EConfirmScreenType::YesNo,
			UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("ResetKey"))),
			FText::Join(FText::FromString(" "), Args),
			[this](EConfirmScreenButtonType ClickedButtonType)
			{
				if (ClickedButtonType != EConfirmScreenButtonType::Confirmed)
				{
					return;
				}
				
				bIsResettingData = true;
				bool bHasDataFailedToReset = false;
				for (UBaseListDataObject* DataToReset : ResettableDataArray)
				{
					if (!IsValid(DataToReset))
					{
						continue;
					}

					if (DataToReset->TryResetBackToDefaultValue())
					{
						
					}
					else
					{
						bHasDataFailedToReset = true;
					}
				}

				if (!bHasDataFailedToReset)
				{
					ResettableDataArray.Empty();
					RemoveActionBinding(ResetActionHandle);
				}

				bIsResettingData = false;
			}
		);
	}
}

void UOptionsScreenWidget::OnBackBoundActionTriggered()
{
	DeactivateWidget();
}

void UOptionsScreenWidget::OnListViewItemHovered(UObject* InHoveredItem, bool bWasHovered)
{
	if (!IsValid(InHoveredItem))
	{
		return;
	}

	if (IsValid(OptionsListView))
	{
		if (UBaseListEntryWidget* HoveredWidget = OptionsListView->GetEntryWidgetFromItem<UBaseListEntryWidget>(InHoveredItem))
		{
			HoveredWidget->NativeOnListEntryWidgetHovered(bWasHovered);

			if (bWasHovered && IsValid(DetailsViewListEntryInfo.Get()))
			{
				DetailsViewListEntryInfo->UpdateDetailsViewInfo(Cast<UBaseListDataObject>(InHoveredItem), 
				TryGetEntryWidgetClassName(InHoveredItem));
			}
			else
			{
				if (UBaseListDataObject* SelectedItem = OptionsListView->GetSelectedItem<UBaseListDataObject>())
				{
					DetailsViewListEntryInfo->UpdateDetailsViewInfo(SelectedItem, TryGetEntryWidgetClassName(SelectedItem));
				}
			}
		}
	}
}

void UOptionsScreenWidget::OnListViewItemSelected(UObject* InSelectedItem)
{
	if (!IsValid(InSelectedItem))
	{
		return;
	}

	DetailsViewListEntryInfo->UpdateDetailsViewInfo(Cast<UBaseListDataObject>(InSelectedItem), 
				TryGetEntryWidgetClassName(InSelectedItem));
}

void UOptionsScreenWidget::OnOptionsTabSelected(FName TabID)
{
	if (IsValid(DetailsViewListEntryInfo.Get()))
	{
		DetailsViewListEntryInfo->ClearDetailsViewInfo();
	}
	
	TArray<TObjectPtr<UBaseListDataObject>> FoundListItems = GetOrCreateDataRegistry()->GetListSourceItemBySelectedTabID(TabID);
	OptionsListView->SetListItems(FoundListItems);
	OptionsListView->RequestRefresh();

	if (OptionsListView->GetNumItems() != 0)
	{
		OptionsListView->NavigateToIndex(0);
		OptionsListView->SetSelectedIndex(0);
	}

	ResettableDataArray.Empty();

	for (UBaseListDataObject* FoundListSourceItem : FoundListItems)
	{
		if (!IsValid(FoundListSourceItem))
		{
			continue;
		}

		if (!FoundListSourceItem->OnListDataModified.IsBoundToObject(this))
		{
			FoundListSourceItem->OnListDataModified.AddUObject(this, &ThisClass::OnListViewDataModified);
		}
		
		if (FoundListSourceItem->CanResetBackToDefaultValue())
		{
			ResettableDataArray.AddUnique(FoundListSourceItem);
		}
	}

	if (ResettableDataArray.IsEmpty())
	{
		RemoveActionBinding(ResetActionHandle);
	}
	else
	{
		if (!GetActionBindings().Contains(ResetActionHandle))
		{
			AddActionBinding(ResetActionHandle);
		}
	}
}

FString UOptionsScreenWidget::TryGetEntryWidgetClassName(UObject* InOwningListItem)
{
	if (UUserWidget* Widget = OptionsListView->GetEntryWidgetFromItem(InOwningListItem))
	{
		return Widget->GetClass()->GetName();
	}
	return TEXT("Entry Widget Not Valid");
}

void UOptionsScreenWidget::OnListViewDataModified(UBaseListDataObject* ModifiedData, EOptionsListDataModifyReason ModifiedReason)
{
	if (!IsValid(ModifiedData) || bIsResettingData)
	{
		return;
	}

	if (ModifiedData->CanResetBackToDefaultValue())
	{
		ResettableDataArray.AddUnique(ModifiedData);
		if (!GetActionBindings().Contains(ResetActionHandle))
		{
			AddActionBinding(ResetActionHandle);
		}
	}
	else
	{
		if (ResettableDataArray.Contains(ModifiedData))
		{
			ResettableDataArray.Remove(ModifiedData);
		}
	}

	if (ResettableDataArray.IsEmpty())
	{
		RemoveActionBinding(ResetActionHandle);
	}
}
