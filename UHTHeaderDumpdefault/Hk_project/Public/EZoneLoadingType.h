#pragma once
#include "CoreMinimal.h"
#include "EZoneLoadingType.generated.h"

UENUM()
enum EZoneLoadingType {
    ZoneLoadingType_Auto,
    ZoneLoadingType_MapChange,
    ZoneLoadingType_OpenZone,
    ZoneLoadingType_MAX UMETA(Hidden),
};

