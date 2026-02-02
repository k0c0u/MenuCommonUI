// copyright iznankai


#include "Widgets/Rotator/FrontendCommonRotator.h"
#include "CommonTextBlock.h"

void UFrontendCommonRotator::SetSelectedOptionByText(const FText& InTextOption)
{
	const int32 Index = TextLabels.IndexOfByPredicate(
		[InTextOption](const FText& TextItem)
		{
			return TextItem.EqualTo(InTextOption);
		}
	);

	if (Index != INDEX_NONE)
	{
		SetSelectedItem(Index);
	}
	else
	{
		MyText->SetText(InTextOption);
	}
}
