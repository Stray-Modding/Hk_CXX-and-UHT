#pragma once
#include "CoreMinimal.h"
#include "ENetworkLagState.generated.h"

UENUM(BlueprintType)
namespace ENetworkLagState {
    enum Type {
        NotLagging,
        Lagging,
    };
}

