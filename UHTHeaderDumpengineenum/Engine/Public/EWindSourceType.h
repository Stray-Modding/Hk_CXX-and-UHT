#pragma once
#include "CoreMinimal.h"
#include "EWindSourceType.generated.h"

UENUM(BlueprintType)
enum class EWindSourceType : uint8 {
    Directional,
    Point,
};

