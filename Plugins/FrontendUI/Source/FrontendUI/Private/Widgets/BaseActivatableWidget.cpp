// copyright iznankai


#include "Widgets/BaseActivatableWidget.h"

APlayerController* UBaseActivatableWidget::GetOwningPlayerController()
{
	if (!CachedOwningPC.IsValid())
	{
		CachedOwningPC = GetOwningPlayer<APlayerController>();
	}

	return CachedOwningPC.IsValid() ? CachedOwningPC.Get() : nullptr;
}
