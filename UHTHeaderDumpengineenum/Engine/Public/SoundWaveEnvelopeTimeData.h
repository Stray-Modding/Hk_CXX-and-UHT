#pragma once
#include "CoreMinimal.h"
#include "SoundWaveEnvelopeTimeData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveEnvelopeTimeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Amplitude;
    
    UPROPERTY()
    float TimeSec;
    
    ENGINE_API FSoundWaveEnvelopeTimeData();
};

