#pragma once
#include "CoreMinimal.h"
#include "BlendSampleData.generated.h"

class UAnimSequence;

USTRUCT()
struct FBlendSampleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SampleDataIndex;
    
    UPROPERTY()
    UAnimSequence* Animation;
    
    UPROPERTY()
    float TotalWeight;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float PreviousTime;
    
    UPROPERTY()
    float SamplePlayRate;
    
    ENGINE_API FBlendSampleData();
};

