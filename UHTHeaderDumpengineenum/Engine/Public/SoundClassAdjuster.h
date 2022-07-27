#pragma once
#include "CoreMinimal.h"
#include "SoundClassAdjuster.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct FSoundClassAdjuster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundClass* SoundClassObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeAdjuster;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchAdjuster;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowPassFilterFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bApplyToChildren: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VoiceCenterChannelVolumeAdjuster;
    
    ENGINE_API FSoundClassAdjuster();
};

