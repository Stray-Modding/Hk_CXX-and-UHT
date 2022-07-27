#pragma once
#include "CoreMinimal.h"
#include "ENavPathEvent.generated.h"

UENUM(BlueprintType)
namespace ENavPathEvent {
    enum Type {
        Cleared,
        NewPath,
        UpdatedDueToGoalMoved,
        UpdatedDueToNavigationChanged,
        Invalidated,
        RePathFailed,
        MetaPathUpdate,
        Custom,
    };
}

