#pragma once
#include "CoreMinimal.h"
#include "EVehicleDifferential4W.generated.h"

UENUM(BlueprintType)
namespace EVehicleDifferential4W {
    enum Type {
        LimitedSlip_4W,
        LimitedSlip_FrontDrive,
        LimitedSlip_RearDrive,
        Open_4W,
        Open_FrontDrive,
        Open_RearDrive,
    };
}

