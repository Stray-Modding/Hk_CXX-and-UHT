#pragma once
#include "CoreMinimal.h"
#include "EMontagePlayReturnType.generated.h"

UENUM(BlueprintType)
enum class EMontagePlayReturnType : uint8 {
    MontageLength,
    Duration,
};

