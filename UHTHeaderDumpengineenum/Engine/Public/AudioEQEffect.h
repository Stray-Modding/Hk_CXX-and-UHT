#pragma once
#include "CoreMinimal.h"
#include "AudioEffectParameters.h"
#include "AudioEQEffect.generated.h"

USTRUCT(BlueprintType)
struct FAudioEQEffect : public FAudioEffectParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FrequencyCenter0;
    
    UPROPERTY(EditAnywhere)
    float Gain0;
    
    UPROPERTY(EditAnywhere)
    float Bandwidth0;
    
    UPROPERTY(EditAnywhere)
    float FrequencyCenter1;
    
    UPROPERTY(EditAnywhere)
    float Gain1;
    
    UPROPERTY(EditAnywhere)
    float Bandwidth1;
    
    UPROPERTY(EditAnywhere)
    float FrequencyCenter2;
    
    UPROPERTY(EditAnywhere)
    float Gain2;
    
    UPROPERTY(EditAnywhere)
    float Bandwidth2;
    
    UPROPERTY(EditAnywhere)
    float FrequencyCenter3;
    
    UPROPERTY(EditAnywhere)
    float Gain3;
    
    UPROPERTY(EditAnywhere)
    float Bandwidth3;
    
    ENGINE_API FAudioEQEffect();
};

