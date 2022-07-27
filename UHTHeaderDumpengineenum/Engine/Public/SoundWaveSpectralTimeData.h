#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralDataEntry.h"
#include "SoundWaveSpectralTimeData.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveSpectralTimeData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSoundWaveSpectralDataEntry> Data;
    
    UPROPERTY()
    float TimeSec;
    
    ENGINE_API FSoundWaveSpectralTimeData();
};

