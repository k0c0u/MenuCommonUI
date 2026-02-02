// copyright iznankai

#pragma once

#include "CommonRotator.h"
#include "FrontendCommonRotator.generated.h"


UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UFrontendCommonRotator : public UCommonRotator
{
	GENERATED_BODY()

public:
	void SetSelectedOptionByText (const FText& InTextOption);

	FORCEINLINE const TObjectPtr<UCommonTextBlock>& GetMyText() const {return MyText;}
};