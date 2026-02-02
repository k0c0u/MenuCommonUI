// copyright iznankai

#pragma once

#include "CommonButtonBase.h"
#include "FrontendCommonButtonBase.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UFrontendCommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetButtonText(FText InText);

	UFUNCTION(BlueprintNativeEvent)
	void ToggleButtonImageHighlight(bool bShouldHighlight);

	FText GetButtonDisplayText() const;

	UFUNCTION(BlueprintCallable)
	void SetButtonDisplayImage(const FSlateBrush& InBrush);

private:
	//~ Begin UUserWidget Interface
	virtual void NativePreConstruct() override;
	//~ End UUserWidget Interface

	//~ Begin UCommonButtonBase Interface
	virtual void NativeOnCurrentTextStyleChanged() override;
	virtual void NativeOnHovered() override;
	virtual void NativeOnUnhovered() override;
	//~ End UCommonButtonBase Interface

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	TSoftObjectPtr<UTexture2D> SoftButtonImage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	TSoftObjectPtr<UTexture2D> PreviewSoftButtonImage = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Setting")
	FColor HighlightButtonImageColor = FColor::White;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Setting")
	FColor DefaultButtonImageColor = FColor::White;;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	float DesiredSize = 35.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	bool bToggleHighlightStateWhenHovered = true;

private:
	//**** Bound Widgets ****//
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> CommonTextBlock_ButtonText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional, AllowPrivateAccess = "true"))
	TObjectPtr<UCommonLazyImage> ButtonImage;
	//**** Bound Widgets ****//

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Frontend Button", meta = (AllowPrivateAccess = "true"))
	FText ButtonDisplayText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Frontend Button", meta = (AllowPrivateAccess = "true"))
	bool bUserUpperCaseForButtonText = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Frontend Button", meta = (AllowPrivateAccess = "true"))
	FText ButtonDescriptionText;
};
