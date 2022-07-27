#pragma once
#include "CoreMinimal.h"
#include "EBoneRotationSource.generated.h"

UENUM(BlueprintType)
enum EBoneRotationSource {
    BRS_KeepComponentSpaceRotation,
    BRS_KeepLocalSpaceRotation,
    BRS_CopyFromTarget,
    BRS_MAX UMETA(Hidden),
};

