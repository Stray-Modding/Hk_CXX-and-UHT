#pragma once
#include "CoreMinimal.h"
#include "ETranslucentSortPolicy.generated.h"

UENUM(BlueprintType)
namespace ETranslucentSortPolicy {
    enum Type {
        SortByDistance,
        SortByProjectedZ,
        SortAlongAxis,
    };
}

