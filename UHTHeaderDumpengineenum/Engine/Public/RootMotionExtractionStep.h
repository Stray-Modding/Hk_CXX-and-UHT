#pragma once
#include "CoreMinimal.h"
#include "RootMotionExtractionStep.generated.h"

class UAnimSequence;

USTRUCT()
struct FRootMotionExtractionStep {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* AnimSequence;
    
    UPROPERTY()
    float StartPosition;
    
    UPROPERTY()
    float EndPosition;
    
    ENGINE_API FRootMotionExtractionStep();
};

