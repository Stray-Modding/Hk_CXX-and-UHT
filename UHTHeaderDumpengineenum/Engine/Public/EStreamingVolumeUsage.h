#pragma once
#include "CoreMinimal.h"
#include "EStreamingVolumeUsage.generated.h"

UENUM(BlueprintType)
enum EStreamingVolumeUsage {
    SVB_Loading,
    SVB_LoadingAndVisibility,
    SVB_VisibilityBlockingOnLoad,
    SVB_BlockingOnLoad,
    SVB_LoadingNotVisible,
    SVB_MAX UMETA(Hidden),
};

