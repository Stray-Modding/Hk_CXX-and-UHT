#pragma once
#include "CoreMinimal.h"
#include "EPinContainerType.generated.h"

UENUM(BlueprintType)
enum class EPinContainerType : uint8 {
    None,
    Array,
    Set,
    Map,
};

