// copyright iznankai

#pragma once

#include "Widgets/Options/DataObjects/BaseListDataObject.h"
#include "ValueListDataObject.generated.h"


class FOptionsDataInteractionHelper;


UCLASS(Abstract)
class FRONTENDUI_API UValueListDataObject : public UBaseListDataObject
{
	GENERATED_BODY()

public:
	void SetDataDynamicGetter(const TSharedPtr<FOptionsDataInteractionHelper>& InDynamicGetter);
	void SetDataDynamicSetter(const TSharedPtr<FOptionsDataInteractionHelper>& InDynamicSetter);

	void SetDefaultValueFromString(const FString& InDefaultValue) {DefaultStringValue = InDefaultValue;}

	//~ Begin UBaseListDataObject Interface
	virtual bool HasDefaultValue() const override {return DefaultStringValue.IsSet();}
	//~ End UBaseListDataObject Interface
	
protected:
	TSharedPtr<FOptionsDataInteractionHelper> DataDynamicGetter;
	TSharedPtr<FOptionsDataInteractionHelper> DataDynamicSetter;

	const FString& GetDefaultValueAsString() const {return DefaultStringValue.GetValue();}
	
private:
	TOptional<FString> DefaultStringValue;
};
