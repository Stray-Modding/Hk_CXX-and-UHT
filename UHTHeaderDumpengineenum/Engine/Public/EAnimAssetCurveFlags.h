#pragma once
#include "CoreMinimal.h"
#include "EAnimAssetCurveFlags.generated.h"

UENUM(BlueprintType)
enum EAnimAssetCurveFlags {
    AACF_NONE,
    AACF_DriveMorphTarget_DEPRECATED,
    AACF_DriveAttribute_DEPRECATED,
    AACF_Editable = 0x4,
    AACF_DriveMaterial_DEPRECATED = 0x8,
    AACF_Metadata = 0x10,
    AACF_DriveTrack = 0x20,
    AACF_Disabled = 0x40,
    AACF_MAX UMETA(Hidden),
};

