// copyright iznankai


#include "Widgets/Options/KeyRemapScreenWidget.h"
#include "CommonUITypes.h"
#include "CommonInputSubsystem.h"
#include "CommonInputTypeEnum.h"
#include "CommonRichTextBlock.h"
#include "ICommonInputModule.h"
#include "FontendSettings/FrontendDeveloperSettings.h"
#include "FontendSettings/FrontendGameUserSettings.h"
#include "Framework/Application/IInputProcessor.h"

class FKeyRemapScreenInputPreprocessor : public IInputProcessor
{
public:
	FKeyRemapScreenInputPreprocessor(ECommonInputType InInputType, ULocalPlayer* LocalPlayer) : CachedInputTypeToListen(InInputType),
	CachedWeakOwningLocalPlayer(LocalPlayer)
	{
	}

	DECLARE_DELEGATE_OneParam(FOnInputPreProcessorKeyPressedDelegate, const FKey& /*PressedKey*/)
	FOnInputPreProcessorKeyPressedDelegate OnInputPreProcessorKeyPressed;

	DECLARE_DELEGATE_OneParam(FOnInputPreProcessorKeySelectedCanceledDelegate, const FText& /*CanceledReason*/)
	FOnInputPreProcessorKeySelectedCanceledDelegate OnInputPreProcessorKeySelectedCanceled;

protected:
	virtual void Tick(const float DeltaTime, FSlateApplication& SlateApp, TSharedRef<ICursor> Cursor) override
	{
	}

	virtual bool HandleKeyDownEvent(FSlateApplication& SlateApp, const FKeyEvent& InKeyEvent) override
	{
		if (UEnum* StaticCommonInputType = StaticEnum<ECommonInputType>())
		{
			StaticCommonInputType->GetValueAsString(CachedInputTypeToListen);

			ProcessPressedKey(InKeyEvent.GetKey());

			return true;
		}
		return false;
	}

	virtual bool HandleMouseButtonDownEvent(FSlateApplication& SlateApp, const FPointerEvent& MouseEvent) override
	{
		ProcessPressedKey(MouseEvent.GetEffectingButton());

		return true;
	}

	void ProcessPressedKey(const FKey& InPressedKey)
	{
		if (InPressedKey == EKeys::Escape)
		{
			OnInputPreProcessorKeySelectedCanceled.ExecuteIfBound(UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("KeyRemapCanceledKey"))));

			return;
		}

		if (CachedWeakOwningLocalPlayer.IsValid())
		{
			if (UCommonInputSubsystem* CommonInputSubsystem = UCommonInputSubsystem::Get(CachedWeakOwningLocalPlayer.Get()))
			{
				ECommonInputType CurrentInputType = CommonInputSubsystem->GetCurrentInputType();

				switch (CachedInputTypeToListen)
				{
				case ECommonInputType::MouseAndKeyboard:
					{
						if (InPressedKey.IsGamepadKey() || CurrentInputType == ECommonInputType::Gamepad)
						{
							OnInputPreProcessorKeySelectedCanceled.ExecuteIfBound(
								UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("DetectedGamepadKey"))));
							return;
						}
						break;
					}
				case ECommonInputType::Gamepad:
					{
						if (CurrentInputType == ECommonInputType::Gamepad && InPressedKey == EKeys::LeftMouseButton)
						{
							if (FCommonInputActionDataBase* InputActionData = ICommonInputModule::GetSettings().GetDefaultClickAction().GetRow<FCommonInputActionDataBase>(TEXT("")))
							{
								OnInputPreProcessorKeyPressed.ExecuteIfBound(InputActionData->GetDefaultGamepadInputTypeInfo().GetKey());
								return;
							}
						}
						
						if (!InPressedKey.IsGamepadKey())
						{
							
							OnInputPreProcessorKeySelectedCanceled.ExecuteIfBound(
								UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("DetectedNonGamepadKey"))));
							return;
						}
						break;
					}
				case ECommonInputType::Touch:
				case ECommonInputType::Count:
				default:
					break;
				}
			}
		}

		OnInputPreProcessorKeyPressed.ExecuteIfBound(InPressedKey);
	}

private:
	ECommonInputType CachedInputTypeToListen;

	TWeakObjectPtr<ULocalPlayer> CachedWeakOwningLocalPlayer;
};

void UKeyRemapScreenWidget::SetDesiredInputTypeToFilter(ECommonInputType InDesiredInputType)
{
	CachedDesiredInputType = InDesiredInputType;
}

void UKeyRemapScreenWidget::NativeOnActivated()
{
	Super::NativeOnActivated();

	CachedInputPreprocessor = MakeShared<FKeyRemapScreenInputPreprocessor>(CachedDesiredInputType, GetOwningLocalPlayer());
	CachedInputPreprocessor->OnInputPreProcessorKeyPressed.BindUObject(this, &ThisClass::OnValidKeyPressedDetected);
	CachedInputPreprocessor->OnInputPreProcessorKeySelectedCanceled.BindUObject(this, &ThisClass::OnKeySelectCanceled);

	FSlateApplication::Get().RegisterInputPreProcessor(CachedInputPreprocessor, -1);

	FString InputDeviceName;

	switch (CachedDesiredInputType)
	{
	case ECommonInputType::MouseAndKeyboard:
		{
			InputDeviceName = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("Mouse&KeyboardKey"))).ToString();
			break;
		}
	case ECommonInputType::Gamepad:
		{
			InputDeviceName = UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("GamepadKey"))).ToString();
			break;
		}
	case ECommonInputType::Touch:
	case ECommonInputType::Count:
	default:
		break;
	}
	
	const FText ConfirmMessage = FText::Format(
		UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("KeyRemapDefaultMessageKey"))),
		FText::FromString(FString::Printf(TEXT("<KeyRemapHighlight>%s </>"), *InputDeviceName)),
		FText::FromString(FString::Printf(TEXT("<KeyRemapDefault>%s.</>"), *UFrontendDeveloperSettings::Get()->FindTextByStringTableKey(FName(TEXT("KeyKey"))).ToString()))
	);

	RemapMessage->SetText(ConfirmMessage);
}

void UKeyRemapScreenWidget::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	if (CachedInputPreprocessor.IsValid())
	{
		FSlateApplication::Get().UnregisterInputPreProcessor(CachedInputPreprocessor);

		CachedInputPreprocessor.Reset();
	}
}

void UKeyRemapScreenWidget::OnValidKeyPressedDetected(const FKey& PressedKey)
{
	RequestDeactivatedWidget(
		[this, PressedKey]()
		{
			OnKeyRemapScreenKeyPressed.ExecuteIfBound(PressedKey);
		}
	);
}

void UKeyRemapScreenWidget::OnKeySelectCanceled(const FText& CanceledReason)
{
	RequestDeactivatedWidget(
		[this, CanceledReason]()
		{
			OnKeyRemapScreenKeySelectCanceled.ExecuteIfBound(CanceledReason);
		}
	);
}

void UKeyRemapScreenWidget::RequestDeactivatedWidget(TFunction<void()> PreDeactivateCallback)
{
	//Delay a tick to make sure the input processed correctly
	FTSTicker::GetCoreTicker().AddTicker(
		FTickerDelegate::CreateLambda(
	[PreDeactivateCallback, this](float DeltaTime)->bool
				{
					PreDeactivateCallback();

					DeactivateWidget();

					return false;
				})
	);
}
