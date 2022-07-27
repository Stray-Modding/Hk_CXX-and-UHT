#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrequencyHz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NormalizedMagnitude;
    
    ENGINE_API FSoundWaveSpectralData();
};

