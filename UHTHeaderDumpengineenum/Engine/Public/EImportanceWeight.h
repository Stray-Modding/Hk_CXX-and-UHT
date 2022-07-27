#pragma once
#include "CoreMinimal.h"
#include "EImportanceWeight.generated.h"

UENUM(BlueprintType)
namespace EImportanceWeight {
    enum Type {
        Luminance,
        Red,
        Green,
        Blue,
        Alpha,
    };
}

