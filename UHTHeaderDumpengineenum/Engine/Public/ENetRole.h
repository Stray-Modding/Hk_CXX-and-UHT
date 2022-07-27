#pragma once
#include "CoreMinimal.h"
#include "ENetRole.generated.h"

UENUM(BlueprintType)
enum ENetRole {
    ROLE_None,
    ROLE_SimulatedProxy,
    ROLE_AutonomousProxy,
    ROLE_Authority,
    ROLE_MAX UMETA(Hidden),
};

