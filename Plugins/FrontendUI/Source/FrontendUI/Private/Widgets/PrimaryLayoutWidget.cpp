// copyright iznankai

#include "Widgets/PrimaryLayoutWidget.h"

#include "Widgets/CommonActivatableWidgetContainer.h"

UCommonActivatableWidgetContainerBase* UPrimaryLayoutWidget::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	if (!RegisteredWidgetStackMap.Contains(InTag))
	{
		UE_LOG(LogTemp, Warning, TEXT("UPrimaryLayoutWidget::FindWidgetStackByTag - Can not find the widget stack by the tag %s"), *InTag.ToString());
		return nullptr;
	}
	return RegisteredWidgetStackMap.FindRef(InTag);
}

void UPrimaryLayoutWidget::RegisterWidgetStack(UPARAM(meta = (Categories = "Frontend.WidgetStack")) FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack)
{
	if (!IsDesignTime() && IsValid(InStack))
	{
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, InStack);
		}
	}
}