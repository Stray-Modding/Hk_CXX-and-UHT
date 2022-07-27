#pragma once
#include "CoreMinimal.h"
#include "EVectorFieldConstructionOp.generated.h"

UENUM(BlueprintType)
enum EVectorFieldConstructionOp {
    VFCO_Extrude,
    VFCO_Revolve,
    VFCO_MAX UMETA(Hidden),
};

