#pragma once
#include "CoreMinimal.h"
#include "EAdditiveAnimationType.h"
#include "SlotEvaluationPose.generated.h"

USTRUCT()
struct FSlotEvaluationPose {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EAdditiveAnimationType> AdditiveType;
    
    UPROPERTY()
    float Weight;
    
    ENGINE_API FSlotEvaluationPose();
};

