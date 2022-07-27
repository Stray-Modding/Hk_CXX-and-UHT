#pragma once
#include "CoreMinimal.h"
#include "EAttachLocation.generated.h"

UENUM(BlueprintType)
namespace EAttachLocation {
    enum Type {
        KeepRelativeOffset,
        KeepWorldPosition,
        SnapToTarget,
        SnapToTargetIncludingScale,
    };
}

