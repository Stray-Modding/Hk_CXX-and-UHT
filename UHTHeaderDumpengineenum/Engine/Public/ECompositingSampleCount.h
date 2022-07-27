#pragma once
#include "CoreMinimal.h"
#include "ECompositingSampleCount.generated.h"

UENUM(BlueprintType)
namespace ECompositingSampleCount {
    enum Type {
        One = 0x1,
        Two,
        Four = 0x4,
        Eight = 0x8,
    };
}

