#pragma once
#include "CoreMinimal.h"
#include "ETickingGroup.generated.h"

UENUM(BlueprintType)
enum ETickingGroup {
    TG_PrePhysics,
    TG_StartPhysics,
    TG_DuringPhysics,
    TG_EndPhysics,
    TG_PostPhysics,
    TG_PostUpdateWork,
    TG_LastDemotable,
    TG_NewlySpawned,
    TG_MAX UMETA(Hidden),
};

