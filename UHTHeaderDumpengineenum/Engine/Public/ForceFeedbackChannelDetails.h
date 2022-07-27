#pragma once
#include "CoreMinimal.h"
#include "RuntimeFloatCurve.h"
#include "ForceFeedbackChannelDetails.generated.h"

USTRUCT(BlueprintType)
struct FForceFeedbackChannelDetails {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bAffectsLeftLarge: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsLeftSmall: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsRightLarge: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsRightSmall: 1;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve;
    
    ENGINE_API FForceFeedbackChannelDetails();
};

