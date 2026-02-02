// copyright iznankai

#pragma once

#include "Blueprint/UserWidget.h"
#include "OptionsDetailsViewWidget.generated.h"


class UBaseListDataObject;
class UCommonTextBlock;
class UCommonLazyImage;
class UCommonRichTextBlock;

UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UOptionsDetailsViewWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void UpdateDetailsViewInfo(UBaseListDataObject* InDataObject, const FString& InWidgetClassName = FString());
	void ClearDetailsViewInfo();

protected:
	virtual void NativeOnInitialized() override;
	
private:
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonTextBlock> TitleTextBlock;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonLazyImage> LazyImage;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonRichTextBlock> DescriptionRichTextBlock;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonRichTextBlock> DynamicDetailsRichTextBlock;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonRichTextBlock> DisableReasonRichTextBlock;
};
