#pragma once
#include "CoreMinimal.h"
#include "EAutoExposureMethod.generated.h"

UENUM(BlueprintType)
enum EAutoExposureMethod {
    AEM_Histogram,
    AEM_Basic,
    AEM_Manual,
    AEM_MAX UMETA(Hidden),
};

