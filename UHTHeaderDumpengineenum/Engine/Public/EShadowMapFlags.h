#pragma once
#include "CoreMinimal.h"
#include "EShadowMapFlags.generated.h"

UENUM(BlueprintType)
enum EShadowMapFlags {
    SMF_None,
    SMF_Streamed,
    SMF_MAX UMETA(Hidden),
};

