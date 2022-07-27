#pragma once
#include "CoreMinimal.h"
#include "ERotatorQuantization.generated.h"

UENUM(BlueprintType)
enum class ERotatorQuantization : uint8 {
    ByteComponents,
    ShortComponents,
};

