// copyright iznankai

#pragma once


#include "Widgets/Options/DataObjects/StringListDataObject.h"
#include "StringResolutionListDataObject.generated.h"



UCLASS()
class FRONTENDUI_API UStringResolutionListDataObject : public UStringListDataObject
{
	GENERATED_BODY()

public:
	void InitResolutionValues();

	FORCEINLINE const FString& GetMaximumAvailableResolution() const {return MaximumAvailableResolution;}

protected:
	virtual void OnDataObjectInitialized() override;

private:
	FString ResToValueString(const FIntPoint InRResolution) const;
	FText ResToDisplayText(const FIntPoint InRResolution) const;

private:
	FString MaximumAvailableResolution = FString();
};
