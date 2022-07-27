#pragma once
#include "CoreMinimal.h"
#include "ENetDormancy.generated.h"

UENUM(BlueprintType)
enum ENetDormancy {
    DORM_Never,
    DORM_Awake,
    DORM_DormantAll,
    DORM_DormantPartial,
    DORM_Initial,
    DORM_MAX UMETA(Hidden),
};

