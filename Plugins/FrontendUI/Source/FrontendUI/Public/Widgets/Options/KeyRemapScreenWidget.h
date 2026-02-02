// copyright iznankai

#pragma once


#include "CommonInputTypeEnum.h"
#include "Widgets/BaseActivatableWidget.h"
#include "KeyRemapScreenWidget.generated.h"



class UCommonRichTextBlock;
class FKeyRemapScreenInputPreprocessor;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UKeyRemapScreenWidget : public UBaseActivatableWidget
{
	GENERATED_BODY()
	
public:
	void SetDesiredInputTypeToFilter(ECommonInputType InDesiredInputType);

	DECLARE_DELEGATE_OneParam(FOnKeyRemapScreenKeyPressedDelegate, const FKey& /*PresseKey*/);
	FOnKeyRemapScreenKeyPressedDelegate OnKeyRemapScreenKeyPressed;

	DECLARE_DELEGATE_OneParam(FOnKeyRemapScreenKeySelectCanceledDelegate, const FText& /*CanceledReason*/);
	FOnKeyRemapScreenKeySelectCanceledDelegate OnKeyRemapScreenKeySelectCanceled;

protected:
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	
private:
	void OnValidKeyPressedDetected(const FKey& PressedKey);
	void OnKeySelectCanceled(const FText& CanceledReason);

	//Delay a tick to make sure the input key is captured properly before calling the PreDeactivateCallback
	void RequestDeactivatedWidget(TFunction<void()> PreDeactivateCallback);
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonRichTextBlock> RemapMessage;

	TSharedPtr<FKeyRemapScreenInputPreprocessor> CachedInputPreprocessor;

	ECommonInputType CachedDesiredInputType;
};
