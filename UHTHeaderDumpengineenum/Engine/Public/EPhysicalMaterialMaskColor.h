#pragma once
#include "CoreMinimal.h"
#include "EPhysicalMaterialMaskColor.generated.h"

UENUM(BlueprintType)
namespace EPhysicalMaterialMaskColor {
    enum Type {
        Red,
        Green,
        Blue,
        Cyan,
        Magenta,
        Yellow,
        White,
        Black,
        MAX,
    };
}

