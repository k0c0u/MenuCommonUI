// copyright iznankai


#include "Widgets/Options/DataObjects/StringResolutionListDataObject.h"
#include "FontendSettings/FrontendGameUserSettings.h"
#include "Kismet/KismetSystemLibrary.h"

void UStringResolutionListDataObject::InitResolutionValues()
{
	TArray<FIntPoint> AvailableResolution;
	UKismetSystemLibrary::GetSupportedFullscreenResolutions(AvailableResolution);

	AvailableResolution.Sort([](const FIntPoint& A, const FIntPoint& B)->bool
	{
		return A.SizeSquared() < B.SizeSquared();
	});
	
	for (const FIntPoint Resolution : AvailableResolution)
	{
		AddDynamicOption(ResToValueString(Resolution), ResToDisplayText(Resolution) );
	}

	MaximumAvailableResolution = ResToValueString(AvailableResolution.Last());

	SetDefaultValueFromString(MaximumAvailableResolution);
}

void UStringResolutionListDataObject::OnDataObjectInitialized()
{
	Super::OnDataObjectInitialized();

	if (!TrySetDisplayTextFromStringValue(CurrentStringValue))
	{
		CurrentDisplayText = ResToDisplayText(UFrontendGameUserSettings::Get()->GetScreenResolution());
	}
}

FString UStringResolutionListDataObject::ResToValueString(const FIntPoint InRResolution) const
{
	return FString::Printf(TEXT("(X=%i, Y=%i)"), InRResolution.X, InRResolution.Y);
}

FText UStringResolutionListDataObject::ResToDisplayText(const FIntPoint InRResolution) const
{
	const FString DisplayString = FString::Printf(TEXT("%i x %i"), InRResolution.X, InRResolution.Y);
	return FText::FromString(DisplayString);
}
