#pragma once
#include "CoreMinimal.h"
#include "EFormatArgumentType.generated.h"

UENUM(BlueprintType)
namespace EFormatArgumentType {
    enum Type {
        Int,
        UInt,
        Float,
        Double,
        Text,
        Gender,
    };
}

