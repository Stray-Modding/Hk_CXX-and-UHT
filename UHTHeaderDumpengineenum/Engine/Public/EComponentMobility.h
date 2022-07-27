#pragma once
#include "CoreMinimal.h"
#include "EComponentMobility.generated.h"

UENUM(BlueprintType)
namespace EComponentMobility {
    enum Type {
        Static,
        Stationary,
        Movable,
    };
}

