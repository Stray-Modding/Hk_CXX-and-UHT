#pragma once
#include "CoreMinimal.h"
#include "EDistributionVectorMirrorFlags.generated.h"

UENUM(BlueprintType)
enum EDistributionVectorMirrorFlags {
    EDVMF_Same,
    EDVMF_Different,
    EDVMF_Mirror,
    EDVMF_MAX UMETA(Hidden),
};

