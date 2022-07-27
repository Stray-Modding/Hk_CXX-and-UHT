#pragma once
#include "CoreMinimal.h"
#include "PlatformInterfaceDelegateDelegate.h"
#include "DelegateArray.generated.h"

USTRUCT(BlueprintType)
struct FDelegateArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlatformInterfaceDelegate> Delegates;
    
    ENGINE_API FDelegateArray();
};

