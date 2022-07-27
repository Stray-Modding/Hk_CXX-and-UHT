#pragma once
#include "CoreMinimal.h"
#include "EParticleSortMode.generated.h"

UENUM(BlueprintType)
enum EParticleSortMode {
    PSORTMODE_None,
    PSORTMODE_ViewProjDepth,
    PSORTMODE_DistanceToView,
    PSORTMODE_Age_OldestFirst,
    PSORTMODE_Age_NewestFirst,
    PSORTMODE_MAX UMETA(Hidden),
};

