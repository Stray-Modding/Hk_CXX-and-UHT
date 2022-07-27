#pragma once
#include "CoreMinimal.h"
#include "EMobileMSAASampleCount.generated.h"

UENUM(BlueprintType)
namespace EMobileMSAASampleCount {
    enum Type {
        One = 0x1,
        Two,
        Four = 0x4,
        Eight = 0x8,
    };
}

