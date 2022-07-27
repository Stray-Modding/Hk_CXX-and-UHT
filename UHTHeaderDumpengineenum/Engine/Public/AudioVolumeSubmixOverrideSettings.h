#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeSubmixOverrideSettings.generated.h"

class USoundSubmix;
class USoundEffectSubmixPreset;

USTRUCT(BlueprintType)
struct FAudioVolumeSubmixOverrideSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmix* Submix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrossfadeTime;
    
    ENGINE_API FAudioVolumeSubmixOverrideSettings();
};

