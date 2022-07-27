#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveFFTSize.generated.h"

UENUM(BlueprintType)
enum class ESoundWaveFFTSize : uint8 {
    VerySmall_64,
    Small_256,
    Medium_512,
    Large_1024,
    VeryLarge_2048,
};

