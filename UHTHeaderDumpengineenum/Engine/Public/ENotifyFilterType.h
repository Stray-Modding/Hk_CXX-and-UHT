#pragma once
#include "CoreMinimal.h"
#include "ENotifyFilterType.generated.h"

UENUM(BlueprintType)
namespace ENotifyFilterType {
    enum Type {
        NoFiltering,
        LOD,
    };
}

