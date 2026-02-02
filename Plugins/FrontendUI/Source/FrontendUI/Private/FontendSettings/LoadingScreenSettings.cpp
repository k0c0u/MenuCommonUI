// copyright iznankai


#include "FontendSettings/LoadingScreenSettings.h"

#include "Blueprint/UserWidget.h"

TSubclassOf<UUserWidget> ULoadingScreenSettings::GetLoadingScreenWidgetClassChecked() const
{
	if (!SoftLoadingScreenWidgetClass.IsNull())
	{
		if (TSubclassOf<UUserWidget> LoadedScreenWidget = SoftLoadingScreenWidgetClass.LoadSynchronous())
		{
			return LoadedScreenWidget;
		}
	}
	return nullptr;
}
