#pragma once
#include "CoreMinimal.h"
#include "ELocationAccuracy.generated.h"

UENUM(BlueprintType)
enum class ELocationAccuracy : uint8 {
    LA_ThreeKilometers,
    LA_OneKilometer,
    LA_HundredMeters,
    LA_TenMeters,
    LA_Best,
    LA_Navigation,
    LA_MAX UMETA(Hidden),
};

