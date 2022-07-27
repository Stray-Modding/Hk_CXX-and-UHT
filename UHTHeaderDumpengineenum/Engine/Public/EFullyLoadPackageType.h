#pragma once
#include "CoreMinimal.h"
#include "EFullyLoadPackageType.generated.h"

UENUM(BlueprintType)
enum EFullyLoadPackageType {
    FULLYLOAD_Map,
    FULLYLOAD_Game_PreLoadClass,
    FULLYLOAD_Game_PostLoadClass,
    FULLYLOAD_Always,
    FULLYLOAD_Mutator,
    FULLYLOAD_MAX UMETA(Hidden),
};

