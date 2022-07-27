#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize10.h"
#include "RootMotionSourceSettings.h"
#include "RootMotionSourceGroup.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRootMotionSourceGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bHasAdditiveSources: 1;
    
    UPROPERTY()
    uint8 bHasOverrideSources: 1;
    
    UPROPERTY()
    uint8 bHasOverrideSourcesWithIgnoreZAccumulate: 1;
    
    UPROPERTY()
    uint8 bIsAdditiveVelocityApplied: 1;
    
    UPROPERTY()
    FRootMotionSourceSettings LastAccumulatedSettings;
    
    UPROPERTY()
    FVector_NetQuantize10 LastPreAdditiveVelocity;
    
    FRootMotionSourceGroup();
};

