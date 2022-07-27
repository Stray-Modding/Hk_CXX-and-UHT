#pragma once
#include "CoreMinimal.h"
#include "SoundModulationDefaultSettings.h"
#include "EAudioOutputTarget.h"
#include "ESoundWaveLoadingBehavior.h"
#include "SoundClassProperties.generated.h"

class USoundSubmix;

USTRUCT(BlueprintType)
struct FSoundClassProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowPassFilterFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttenuationDistanceScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LFEBleed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VoiceCenterChannelVolume;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float RadioFilterVolume;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float RadioFilterVolumeThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bApplyEffects: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAlwaysPlay: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIsUISound: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIsMusic: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCenterChannelOnly: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bApplyAmbientVolumes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bReverb: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Default2DReverbSendAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoundModulationDefaultSettings ModulationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EAudioOutputTarget::Type> OutputTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESoundWaveLoadingBehavior LoadingBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundSubmix* DefaultSubmix;
    
    ENGINE_API FSoundClassProperties();
};

