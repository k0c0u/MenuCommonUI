// copyright iznankai

#pragma once


#include "Subsystems/GameInstanceSubsystem.h"
#include "FrontendEnumTypes.h"
#include "FrontendUISubsystem.generated.h"

class UPrimaryLayoutWidget;
struct FGameplayTag;
class UBaseActivatableWidget;
class UFrontendCommonButtonBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnButtonDescriptionTextUpdatedDelegate,UFrontendCommonButtonBase*,BroadcastingButton,FText,DescriptionText);


enum class EAsyncPushWidgetState : uint8
{
	OnCreatedBeforePush,
	AfterPush
};
 
UCLASS()
class FRONTENDUI_API UFrontendUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	static UFrontendUISubsystem* Get(const UObject* WorldContextObject);

	//~ Begin USubsyem Interface
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	//~ End USubsyem Interface

	UFUNCTION(BlueprintCallable)
	void RegisterCreatedPrimaryLayoutWidget(UPrimaryLayoutWidget* InCreatedWidget);

	void PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag,TSoftClassPtr<UBaseActivatableWidget> InSoftWidgetClass,TFunction<void(EAsyncPushWidgetState,UBaseActivatableWidget*)> AysncPushStateCallback);

	void PushConfirmScreenToModalStackAsync(EConfirmScreenType InScreenType,const FText& InScreenTitle,const FText& InScreenMsg,TFunction<void(EConfirmScreenButtonType)> ButtonClickedCallback);
	
	UPROPERTY(BlueprintAssignable)
	FOnButtonDescriptionTextUpdatedDelegate OnButtonDescriptionTextUpdated;
	
private:
	UPROPERTY(Transient)
	UPrimaryLayoutWidget* CreatedPrimaryLayout;
};
