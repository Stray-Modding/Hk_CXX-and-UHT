#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PoseData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> LocalSpacePose;
    
    UPROPERTY()
    TMap<int32, int32> TrackToBufferIndex;
    
    UPROPERTY()
    TArray<float> CurveData;
    
    FPoseData();
};

