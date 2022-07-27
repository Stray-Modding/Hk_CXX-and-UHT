#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ScaleTrack.generated.h"

USTRUCT()
struct ENGINE_API FScaleTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> ScaleKeys;
    
    UPROPERTY()
    TArray<float> Times;
    
    FScaleTrack();
};

