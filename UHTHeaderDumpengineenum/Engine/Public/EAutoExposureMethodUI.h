#pragma once
#include "CoreMinimal.h"
#include "EAutoExposureMethodUI.generated.h"

UENUM(BlueprintType)
namespace EAutoExposureMethodUI {
    enum Type {
        AEM_Histogram,
        AEM_Basic,
        AEM_Manual,
        AEM_MAX UMETA(Hidden),
    };
}

