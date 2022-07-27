#pragma once
#include "CoreMinimal.h"
#include "EHitProxyPriority.generated.h"

UENUM(BlueprintType)
enum EHitProxyPriority {
    HPP_World,
    HPP_Wireframe,
    HPP_Foreground,
    HPP_UI,
    HPP_MAX UMETA(Hidden),
};

