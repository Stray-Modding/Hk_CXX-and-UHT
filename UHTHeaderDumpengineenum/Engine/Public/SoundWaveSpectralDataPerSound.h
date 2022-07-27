#pragma once
#include "CoreMinimal.h"
#include "SoundWaveSpectralData.h"
#include "SoundWaveSpectralDataPerSound.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FSoundWaveSpectralDataPerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundWaveSpectralData> SpectralData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    ENGINE_API FSoundWaveSpectralDataPerSound();
};

