#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackParameters.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Tag;
    
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    bool bIgnoreTimeDilation;
    
    UPROPERTY()
    bool bPlayWhilePaused;
    
    ENGINE_API FForceFeedbackParameters();
};

