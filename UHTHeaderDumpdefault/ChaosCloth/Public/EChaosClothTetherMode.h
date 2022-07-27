#pragma once
#include "CoreMinimal.h"
#include "EChaosClothTetherMode.generated.h"

UENUM()
enum class EChaosClothTetherMode {
    FastTetherFastLength,
    AccurateTetherFastLength,
    AccurateTetherAccurateLength,
    MaxChaosClothTetherMode,
};

