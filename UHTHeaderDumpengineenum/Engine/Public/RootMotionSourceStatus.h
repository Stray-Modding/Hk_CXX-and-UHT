#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceStatus.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionSourceStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 Flags;
    
    FRootMotionSourceStatus();
};

