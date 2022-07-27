#pragma once
#include "CoreMinimal.h"
#include "EAngularDriveMode.generated.h"

UENUM(BlueprintType)
namespace EAngularDriveMode {
    enum Type {
        SLERP,
        TwistAndSwing,
    };
}

