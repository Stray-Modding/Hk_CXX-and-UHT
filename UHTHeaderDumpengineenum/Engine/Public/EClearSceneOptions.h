#pragma once
#include "CoreMinimal.h"
#include "EClearSceneOptions.generated.h"

UENUM(BlueprintType)
namespace EClearSceneOptions {
    enum Type {
        NoClear,
        HardwareClear,
        QuadAtMaxZ,
    };
}

