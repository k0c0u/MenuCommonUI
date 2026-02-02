#pragma once

UENUM(BlueprintType)
enum class EConfirmScreenType : uint8
{
	Ok,
	YesNo,
	OKCancel,
	Unknown UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EConfirmScreenButtonType : uint8
{
	Confirmed,
	Cancelled,
	Closed,
	Unknown UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EOptionsListDataModifyReason : uint8
{
	Directly,
	Dependency,
	ResetToDefault
};

UENUM(BlueprintType)
enum class EGraphicsQuality : uint8
{
	Low,
	Medium,
	High,
	Epic,
	Cinematic,
	Unknown UMETA(Hidden)
};