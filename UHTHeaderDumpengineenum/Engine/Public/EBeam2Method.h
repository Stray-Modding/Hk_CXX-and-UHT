#pragma once
#include "CoreMinimal.h"
#include "EBeam2Method.generated.h"

UENUM(BlueprintType)
enum EBeam2Method {
    PEB2M_Distance,
    PEB2M_Target,
    PEB2M_Branch,
    PEB2M_MAX UMETA(Hidden),
};

