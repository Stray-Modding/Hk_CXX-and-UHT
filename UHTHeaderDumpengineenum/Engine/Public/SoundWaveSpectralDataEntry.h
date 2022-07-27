#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Magnitude;
    
    UPROPERTY()
    float NormalizedMagnitude;
    
    ENGINE_API FSoundWaveSpectralDataEntry();
};

