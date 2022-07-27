#pragma once
#include "CoreMinimal.h"
#include "FDataDrivenCVarType.generated.h"

UENUM(BlueprintType)
enum class FDataDrivenCVarType : uint8 {
    CVarFloat,
    CVarInt,
    CVarBool,
};

