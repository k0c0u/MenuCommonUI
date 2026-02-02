// copyright iznankai


#include "Widgets/Lists/FrontendTabListWidgetBase.h"

#include "Widgets/Buttons/FrontendCommonButtonBase.h"
#include "Editor/WidgetCompilerLog.h"


void UFrontendTabListWidgetBase::RequestRegisterTab(const FName& InTabID, const FText& InTabDisplayName)
{
	RegisterTab(InTabID, TabButtonWidgetClass, nullptr);

	if (UFrontendCommonButtonBase* Button = Cast<UFrontendCommonButtonBase>(GetTabButtonBaseByID(InTabID)))
	{
		Button->SetButtonText(InTabDisplayName);
	}
}

#if WITH_EDITOR
void UFrontendTabListWidgetBase::ValidateCompiledDefaults(class IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledDefaults(CompileLog);

	if (!TabButtonWidgetClass)
	{
		CompileLog.Error(FText::FromString(TEXT("TabButtonWidgetClass has no valid") + GetClass()->GetName()));
	}
}
#endif