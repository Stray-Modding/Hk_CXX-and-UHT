#pragma once
#include "CoreMinimal.h"
#include "ERootMotionMode.generated.h"

UENUM(BlueprintType)
namespace ERootMotionMode {
    enum Type {
        NoRootMotionExtraction,
        IgnoreRootMotion,
        RootMotionFromEverything,
        RootMotionFromMontagesOnly,
    };
}

