#pragma once
#include "CoreMinimal.h"
#include "EDOFMode.generated.h"

UENUM(BlueprintType)
namespace EDOFMode {
    enum Type {
        Default,
        SixDOF,
        YZPlane,
        XZPlane,
        XYPlane,
        CustomPlane,
        None,
    };
}

