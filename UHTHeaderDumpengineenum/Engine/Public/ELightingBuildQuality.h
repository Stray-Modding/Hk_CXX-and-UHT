#pragma once
#include "CoreMinimal.h"
#include "ELightingBuildQuality.generated.h"

UENUM(BlueprintType)
enum ELightingBuildQuality {
    Quality_Preview,
    Quality_Medium,
    Quality_High,
    Quality_Production,
    Quality_MAX UMETA(Hidden),
};

