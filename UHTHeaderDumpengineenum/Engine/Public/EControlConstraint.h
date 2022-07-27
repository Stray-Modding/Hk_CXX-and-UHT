#pragma once
#include "CoreMinimal.h"
#include "EControlConstraint.generated.h"

UENUM(BlueprintType)
namespace EControlConstraint {
    enum Type {
        Orientation,
        Translation,
        MAX,
    };
}

