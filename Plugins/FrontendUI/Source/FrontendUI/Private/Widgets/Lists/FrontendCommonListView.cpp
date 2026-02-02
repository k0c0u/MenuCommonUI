// copyright iznankai


#include "Widgets/Lists/FrontendCommonListView.h"

#include "Editor/WidgetCompilerLog.h"
#include "Widgets/Options/ListEntries/BaseListEntryWidget.h"
#include "Widgets/Options/DataListEntryMapping.h"
#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "Widgets/Options/DataObjects/CollectionListDataObject.h"


UUserWidget& UFrontendCommonListView::OnGenerateEntryWidgetInternal(UObject* Item,
                                                                    TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable)
{
	if (IsDesignTime())
	{
		return Super::OnGenerateEntryWidgetInternal(Item, DesiredEntryClass, OwnerTable);
	}

	if (TSubclassOf<UBaseListEntryWidget> FoundWidgetClass = DataListEntryMapping->FindEntryWidgetClassByDataObject(Cast<UBaseListDataObject>(Item)))
	{
		return GenerateTypedEntry<UBaseListEntryWidget>(FoundWidgetClass, OwnerTable);
	}
	else
	{
		return Super::OnGenerateEntryWidgetInternal(Item, DesiredEntryClass, OwnerTable);
	}
}

bool UFrontendCommonListView::OnIsSelectableOrNavigableInternal(UObject* FirstSelectedItem)
{
	return FirstSelectedItem->IsA<UCollectionListDataObject>();
}

#if WITH_EDITOR
void UFrontendCommonListView::ValidateCompiledDefaults(class IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledDefaults(CompileLog);

	if (!DataListEntryMapping)
	{
		CompileLog.Error(FText::FromString("DataListEntryMapping not valid"));
	}
}
#endif