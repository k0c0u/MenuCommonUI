// copyright iznankai


#include "FontendSettings/FrontendDeveloperSettings.h"

#include "Internationalization/Culture.h"
#include "Internationalization/StringTable.h"

const UFrontendDeveloperSettings* UFrontendDeveloperSettings::Get()
{
	return GetDefault<UFrontendDeveloperSettings>();
}

FText UFrontendDeveloperSettings::FindTextByStringTableKey(const FName& Key) const
{
	if (CachedTableId != NAME_None)
	{
		return FText::FromStringTable(CachedTableId, Key.ToString());
	}
	else
	{
		if (!MenuLocalizationStringTable.IsNull())
		{
			if (const UStringTable* Table = MenuLocalizationStringTable.LoadSynchronous())
			{
				CachedTableId = Table->GetStringTableId();
				return FText::FromStringTable(CachedTableId, Key.ToString());
			}
		}
		
	}
	
	return FText::GetEmpty();
}

FName UFrontendDeveloperSettings::NormalizeCultureName(const FName& Culture) const
{
	const FString CultureName = Culture.ToString();
	const int32 Index = CultureName.Find(TEXT("-"));
	return Index != INDEX_NONE ? FName(*CultureName.Left(Index)) : Culture;
}

/*
void UFrontendDeveloperSettings::BuildCacheIfNeeded() const
{
	if (CachedTableIds.Num() > 0)
	{
		for (const TPair<FName, TSoftObjectPtr<UStringTable>>& SoftTable : CultureToStringTable)
		{
			if (!SoftTable.Value.IsNull() && !CachedTableIds.Contains(SoftTable.Key))
			{
				if (const UStringTable* Table = SoftTable.Value.LoadSynchronous())
				{
					CachedTableIds.Add(SoftTable.Key, Table->GetStringTableId());
				}
			}
		}
	}
}

FText UFrontendDeveloperSettings::GetTextFromCulture(const FName& Culture, const FName& Key) const
{
	if (const FName* TableId = CachedTableIds.Find(Culture))
	{
		return FText::FromStringTable(*TableId, Key.ToString());
	}
	return FText::GetEmpty();
}

FText UFrontendDeveloperSettings::GetTextByKey(const FName& InKey) const
{
	if (InKey.IsNone())
	{
		return FText::GetEmpty();
	}
	
	BuildCacheIfNeeded();
	
	const FName FullCulture = FName(*FInternationalization::Get().GetCurrentCulture()->GetName());
	const FName LangCulture = NormalizeCultureName(FullCulture);

	FText Result = GetTextFromCulture(FullCulture, InKey);
	if (!Result.IsEmpty())
	{
		return Result;
	}

	Result = GetTextFromCulture(LangCulture, InKey);
	if (!Result.IsEmpty())
	{
		return Result;
	}

	Result = GetTextFromCulture(DefaultCulture, InKey);
	if (!Result.IsEmpty())
	{
		return Result;
	}
	
	return FText::FromString(FString::Printf(TEXT("[%s]"), *InKey.ToString()));
}
*/
