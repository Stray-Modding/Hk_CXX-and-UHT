#pragma once
#include "CoreMinimal.h"
#include "SoundWaveEnvelopeDataPerSound.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FSoundWaveEnvelopeDataPerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Envelope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    ENGINE_API FSoundWaveEnvelopeDataPerSound();
};

