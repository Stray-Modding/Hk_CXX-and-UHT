#pragma once
#include "CoreMinimal.h"
#include "EMeshCameraFacingUpAxis.generated.h"

UENUM(BlueprintType)
enum EMeshCameraFacingUpAxis {
    CameraFacing_NoneUP,
    CameraFacing_ZUp,
    CameraFacing_NegativeZUp,
    CameraFacing_YUp,
    CameraFacing_NegativeYUp,
    CameraFacing_MAX UMETA(Hidden),
};

