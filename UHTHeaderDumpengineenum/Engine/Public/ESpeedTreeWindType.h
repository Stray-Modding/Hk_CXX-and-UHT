#pragma once
#include "CoreMinimal.h"
#include "ESpeedTreeWindType.generated.h"

UENUM(BlueprintType)
enum ESpeedTreeWindType {
    STW_None,
    STW_Fastest,
    STW_Fast,
    STW_Better,
    STW_Best,
    STW_Palm,
    STW_BestPlus,
    STW_MAX UMETA(Hidden),
};

