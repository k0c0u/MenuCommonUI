// copyright iznankai

#pragma once

#include "CommonTabListWidgetBase.h"
#include "FrontendTabListWidgetBase.generated.h"


class UFrontendCommonButtonBase;

UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class FRONTENDUI_API UFrontendTabListWidgetBase : public UCommonTabListWidgetBase
{
	GENERATED_BODY()
public:
	void RequestRegisterTab(const FName& InTabID, const FText& InTabDisplayName);
	
private:
#if WITH_EDITOR
	virtual void ValidateCompiledDefaults(class IWidgetCompilerLog& CompileLog) const override;
#endif
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FrontendTabList", meta = (AllowPrivateAccess = "true", ClampMin = "1", UIMin = "1", ClampMax= "10", UIMax = "10"))
	int32 DebugTabCount = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FrontendTabList", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UFrontendCommonButtonBase> TabButtonWidgetClass;
};
