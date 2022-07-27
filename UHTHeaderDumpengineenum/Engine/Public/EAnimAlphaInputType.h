#pragma once
#include "CoreMinimal.h"
#include "EAnimAlphaInputType.generated.h"

UENUM(BlueprintType)
enum class EAnimAlphaInputType : uint8 {
    Float,
    Bool,
    Curve,
};

