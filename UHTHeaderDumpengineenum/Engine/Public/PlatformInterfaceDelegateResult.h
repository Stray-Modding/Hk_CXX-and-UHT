#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceData.h"
#include "PlatformInterfaceDelegateResult.generated.h"

USTRUCT(BlueprintType)
struct FPlatformInterfaceDelegateResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bSuccessful;
    
    UPROPERTY()
    FPlatformInterfaceData Data;
    
    ENGINE_API FPlatformInterfaceDelegateResult();
};

