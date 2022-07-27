#pragma once
#include "CoreMinimal.h"
#include "ETimelineDirection.generated.h"

UENUM(BlueprintType)
namespace ETimelineDirection {
    enum Type {
        Forward,
        Backward,
    };
}

