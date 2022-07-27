#pragma once
#include "CoreMinimal.h"
#include "EOrbitChainMode.generated.h"

UENUM(BlueprintType)
enum EOrbitChainMode {
    EOChainMode_Add,
    EOChainMode_Scale,
    EOChainMode_Link,
    EOChainMode_MAX UMETA(Hidden),
};

