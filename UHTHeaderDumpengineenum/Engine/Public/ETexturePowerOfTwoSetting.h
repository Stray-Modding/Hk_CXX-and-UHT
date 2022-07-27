#pragma once
#include "CoreMinimal.h"
#include "ETexturePowerOfTwoSetting.generated.h"

UENUM(BlueprintType)
namespace ETexturePowerOfTwoSetting {
    enum Type {
        None,
        PadToPowerOfTwo,
        PadToSquarePowerOfTwo,
    };
}

