#pragma once
#include "CoreMinimal.h"
#include "EHasCustomNavigableGeometry.generated.h"

UENUM(BlueprintType)
namespace EHasCustomNavigableGeometry {
    enum Type {
        No,
        Yes,
        EvenIfNotCollidable,
        DontExport,
    };
}

