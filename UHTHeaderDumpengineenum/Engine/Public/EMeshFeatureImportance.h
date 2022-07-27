#pragma once
#include "CoreMinimal.h"
#include "EMeshFeatureImportance.generated.h"

UENUM(BlueprintType)
namespace EMeshFeatureImportance {
    enum Type {
        Off,
        Lowest,
        Low,
        Normal,
        High,
        Highest,
    };
}

