#pragma once
#include "CoreMinimal.h"
#include "ETrailWidthMode.generated.h"

UENUM(BlueprintType)
enum ETrailWidthMode {
    ETrailWidthMode_FromCentre,
    ETrailWidthMode_FromFirst,
    ETrailWidthMode_FromSecond,
};

