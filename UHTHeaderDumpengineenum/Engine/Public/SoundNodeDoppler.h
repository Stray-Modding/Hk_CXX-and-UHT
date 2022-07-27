#pragma once
#include "CoreMinimal.h"
#include "SoundNode.h"
#include "SoundNodeDoppler.generated.h"

UCLASS(EditInlineNew)
class USoundNodeDoppler : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DopplerIntensity;
    
    UPROPERTY(EditAnywhere)
    bool bUseSmoothing;
    
    UPROPERTY(EditAnywhere)
    float SmoothingInterpSpeed;
    
    USoundNodeDoppler();
};

