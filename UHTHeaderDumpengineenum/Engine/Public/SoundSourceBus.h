#pragma once
#include "CoreMinimal.h"
#include "SoundWave.h"
#include "ESourceBusChannels.h"
#include "SoundSourceBus.generated.h"

class UAudioBus;

UCLASS(EditInlineNew)
class ENGINE_API USoundSourceBus : public USoundWave {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESourceBusChannels SourceBusChannels;
    
    UPROPERTY(EditAnywhere)
    float SourceBusDuration;
    
    UPROPERTY(EditAnywhere)
    UAudioBus* AudioBus;
    
    UPROPERTY()
    uint8 bAutoDeactivateWhenSilent: 1;
    
    USoundSourceBus();
};

