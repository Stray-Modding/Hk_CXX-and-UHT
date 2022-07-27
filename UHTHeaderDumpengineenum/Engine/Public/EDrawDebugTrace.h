#pragma once
#include "CoreMinimal.h"
#include "EDrawDebugTrace.generated.h"

UENUM(BlueprintType)
namespace EDrawDebugTrace {
    enum Type {
        None,
        ForOneFrame,
        ForDuration,
        Persistent,
    };
}

