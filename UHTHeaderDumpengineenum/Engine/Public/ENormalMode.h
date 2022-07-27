#pragma once
#include "CoreMinimal.h"
#include "ENormalMode.generated.h"

UENUM(BlueprintType)
enum ENormalMode {
    NM_PreserveSmoothingGroups,
    NM_RecalculateNormals,
    NM_RecalculateNormalsSmooth,
    NM_RecalculateNormalsHard,
    TEMP_BROKEN,
};

