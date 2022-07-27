#pragma once
#include "CoreMinimal.h"
#include "EUpdateRateShiftBucket.h"
#include "AnimUpdateRateParameters.generated.h"

USTRUCT()
struct FAnimUpdateRateParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    EUpdateRateShiftBucket ShiftBucket;
    
    UPROPERTY()
    uint8 bInterpolateSkippedFrames: 1;
    
    UPROPERTY()
    uint8 bShouldUseLodMap: 1;
    
    UPROPERTY()
    uint8 bShouldUseMinLod: 1;
    
    UPROPERTY()
    uint8 bSkipUpdate: 1;
    
    UPROPERTY()
    uint8 bSkipEvaluation: 1;
    
    UPROPERTY()
    int32 UpdateRate;
    
    UPROPERTY()
    int32 EvaluationRate;
    
    UPROPERTY(Transient)
    float TickedPoseOffestTime;
    
    UPROPERTY(Transient)
    float AdditionalTime;
    
    UPROPERTY()
    int32 BaseNonRenderedUpdateRate;
    
    UPROPERTY()
    int32 MaxEvalRateForInterpolation;
    
    UPROPERTY()
    TArray<float> BaseVisibleDistanceFactorThesholds;
    
    UPROPERTY()
    TMap<int32, int32> LODToFrameSkipMap;
    
    UPROPERTY()
    int32 SkippedUpdateFrames;
    
    UPROPERTY()
    int32 SkippedEvalFrames;
    
    ENGINE_API FAnimUpdateRateParameters();
};

