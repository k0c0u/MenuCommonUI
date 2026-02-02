// copyright iznankai


#include "Widgets/Options/ListEntries/StringListEntryWidget.h"

#include "CommonInputSubsystem.h"
#include "CommonTextBlock.h"
#include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "Widgets/Options/DataObjects/StringListDataObject.h"
#include "Widgets/Rotator/FrontendCommonRotator.h"

void UStringListEntryWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	PreviousOption->OnClicked().AddUObject(this, &ThisClass::OnPreviousOptionButtonClicked);
	NextOption->OnClicked().AddUObject(this, &ThisClass::OnNextOptionButtonClicked);

	if (IsValid(AvailableOptions.Get()))
	{
		AvailableOptions->OnClicked().AddLambda([this](){SelectedThisEntryWidget();});
		AvailableOptions->OnRotatedEvent.AddUObject(this, &ThisClass::OnRotatorValueChanged);
	}
}

void UStringListEntryWidget::OnOwningListDataObjectSet(UBaseListDataObject* InOwningListDataObject)
{
	Super::OnOwningListDataObjectSet(InOwningListDataObject);

	CachedStringDataObject = Cast<UStringListDataObject>(InOwningListDataObject);
	
	if (IsValid(CachedStringDataObject))
	{
		AvailableOptions->PopulateTextLabels(CachedStringDataObject->GetAvailableOptionsTextArray());
		AvailableOptions->SetSelectedOptionByText(CachedStringDataObject->GetCurrentDisplayText());
	}
}

void UStringListEntryWidget::OnOwningListDataObjectModified(UBaseListDataObject* OwningModifiedData,
                                                            EOptionsListDataModifyReason OwningModifiedReason)
{
	if (CachedStringDataObject)
	{
		AvailableOptions->SetSelectedOptionByText(CachedStringDataObject->GetCurrentDisplayText());
	}
}

void UStringListEntryWidget::OnToggleEditableState(bool bIsEditable)
{
	Super::OnToggleEditableState(bIsEditable);

	if (IsValid(PreviousOption.Get()))
	{
		PreviousOption->SetIsEnabled(bIsEditable);
	}

	if (IsValid(AvailableOptions.Get()))
	{
		AvailableOptions->SetIsEnabled(bIsEditable);
	}

	if (IsValid(NextOption.Get()))
	{
		NextOption->SetIsEnabled(bIsEditable);
	}
}

UWidget* UStringListEntryWidget::GetWidgetToFocusForGamepad() const
{
	if (IsValid(AvailableOptions.Get()))
	{
		return AvailableOptions.Get();
	}
	return Super::GetWidgetToFocusForGamepad();
}

void UStringListEntryWidget::OnPreviousOptionButtonClicked()
{
	if (IsValid(CachedStringDataObject.Get()))
	{
		CachedStringDataObject->BackToPreviousOption();
	}

	SelectedThisEntryWidget();
}

void UStringListEntryWidget::OnNextOptionButtonClicked()
{
	if (IsValid(CachedStringDataObject.Get()))
	{
		CachedStringDataObject->AdvanceToNextOption();
	}

	SelectedThisEntryWidget();
}

void UStringListEntryWidget::ToggleHighlightState(bool bShouldHighlight)
{
	Super::ToggleHighlightState(bShouldHighlight);
	
	if (IsValid(AvailableOptions.Get()) && IsValid(AvailableOptions->GetMyText().Get()))
	{
		AvailableOptions->GetMyText()->SetStyle(bShouldHighlight ? HighlighTextStyle : DefaultTextStyle);
	}

	if(IsValid(NextOption.Get()))
	{
		NextOption->ToggleButtonImageHighlight(bShouldHighlight);
	}

	if(IsValid(PreviousOption.Get()))
	{
		PreviousOption->ToggleButtonImageHighlight(bShouldHighlight);
	}
}

void UStringListEntryWidget::OnRotatorValueChanged(int32 Value, bool bUserInitiated)
{
	if (!CachedStringDataObject || !bUserInitiated || !IsValid(AvailableOptions.Get()))
	{
		return;
	}

	if (UCommonInputSubsystem* CommonInputSubsystem = GetInputSubsystem())
	{
		if (CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad)
		{
			CachedStringDataObject->OnRotatorInitiatedValueChange(AvailableOptions->GetSelectedText());
		}
	}
}
