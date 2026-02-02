// copyright iznankai

#pragma once


#include "Widgets/Options/DataObjects/ValueListDataObject.h"
#include "StringListDataObject.generated.h"



UCLASS()
class FRONTENDUI_API UStringListDataObject : public UValueListDataObject
{
	GENERATED_BODY()

public:
	void AddDynamicOption(const FString& InStringValue, const FText& InTextValue);
	void AdvanceToNextOption();
	void BackToPreviousOption();
	
	FORCEINLINE const TArray<FText>& GetAvailableOptionsTextArray() const {return AvailableOptionsTextArray;}
	FORCEINLINE const FText& GetCurrentDisplayText() const {return CurrentDisplayText;}

	//~ Begin UBaseListDataObject Interface
	virtual bool CanResetBackToDefaultValue() const override;
	virtual bool TryResetBackToDefaultValue() override;
	virtual bool CanSetToForcedStringValue(const FString& InForcedValue) const override;
	virtual void OnSetToForcedStringValue(const FString& InForcedValue) override;
	//~ End UBaseListDataObject Interface

	void OnRotatorInitiatedValueChange(const FText& InNewSelectedText);
	
protected:
	virtual void OnDataObjectInitialized() override;
	bool TrySetDisplayTextFromStringValue(const FString& InStringValue);
	
protected:
	FString CurrentStringValue;
	FText CurrentDisplayText;
	
	TArray<FString> AvailableOptionsStringArray;
	TArray<FText> AvailableOptionsTextArray;
};

UCLASS()
class FRONTENDUI_API UStringBoolListDataObject : public UStringListDataObject
{
	GENERATED_BODY()

public:
	void OverrideTrueDisplayText(const FText& InNewTrueDisplayText);
	void OverrideFalseDisplayText(const FText& InNewFalseDisplayText);
	void SetTrueAsDefaultValue();
	void SetFalseAsDefaultValue();
	
private:
	void TryInitBoolValues();
	
protected:
	virtual void OnDataObjectInitialized() override;
	
private:
	const FString TrueString = TEXT("true");
	const FString FalseString = TEXT("false");
};

UCLASS()
class FRONTENDUI_API UStringEnumListDataObject : public UStringListDataObject
{
	GENERATED_BODY()

public:
	template <typename EnumType>
	void AddEnumOption(EnumType InEnumOption, const FText& InDisplayText)
	{
		if (const UEnum* StaticEnumOption = StaticEnum<EnumType>())
		{
			const FString ConvertedEnumString = StaticEnumOption->GetNameStringByValue(InEnumOption);

			AddDynamicOption(ConvertedEnumString, InDisplayText);
		}
	}

	template <typename EnumType>
	EnumType GetCurrentValueAsEnum() const
	{
		if (const UEnum* StaticEnumOption = StaticEnum<EnumType>())
		{
			return StaticCast<EnumType>(StaticEnumOption->GetValueByNameString(CurrentStringValue));
		}
		return EnumType();
	}

	template <typename EnumType>
	void SetDefaultValueFromEnumOption(EnumType InEnumOption)
	{
		if (const UEnum* StaticEnumOption = StaticEnum<EnumType>())
		{
			const FString ConvertedEnumString = StaticEnumOption->GetNameStringByValue(InEnumOption);

			SetDefaultValueFromString(ConvertedEnumString);
		}
	}
};

UCLASS()
class FRONTENDUI_API UStringIntegerListDataObject : public UStringListDataObject
{
	GENERATED_BODY()

public:
	void AddIntegerOption(int32 InIntegerValue, const FText& InDisplayText);

protected:
	virtual void OnDataObjectInitialized() override;

	virtual void OnEditDependencyDataModified(UBaseListDataObject* ModifiedDependencyData,
											 EOptionsListDataModifyReason ModifiedReason =
												 EOptionsListDataModifyReason::Directly) override;
};