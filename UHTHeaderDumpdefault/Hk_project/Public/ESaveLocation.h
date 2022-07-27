#pragma once
#include "CoreMinimal.h"
#include "ESaveLocation.generated.h"

UENUM()
enum ESaveLocation {
    SaveLocation_FixedSlot,
    SaveLocation_NamedSlot,
    SaveLocation_MAX UMETA(Hidden),
};

