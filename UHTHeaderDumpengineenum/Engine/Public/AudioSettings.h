#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EMonoChannelUpmixMethod.h"
#include "EPanningMethod.h"
#include "AudioQualitySettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EVoiceSampleRate.h"
#include "SoundDebugEntry.h"
#include "DefaultAudioBusSettings.h"
#include "AudioSettings.generated.h"

class USoundClass;
class USoundConcurrency;

UCLASS(DefaultConfig)
class ENGINE_API UAudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultSoundClassName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultMediaSoundClassName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultSoundConcurrencyName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultBaseSoundMix;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath VoiPSoundClass;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath MasterSubmix;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath BaseDefaultSubmix;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath ReverbSubmix;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath EQSubmix;
    
    UPROPERTY(Config, EditAnywhere)
    EVoiceSampleRate VoiPSampleRate;
    
    UPROPERTY(Config)
    float DefaultReverbSendLevel;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaximumConcurrentStreams;
    
    UPROPERTY(Config, EditAnywhere)
    float GlobalMinPitchScale;
    
    UPROPERTY(Config, EditAnywhere)
    float GlobalMaxPitchScale;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FAudioQualitySettings> QualityLevels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bAllowPlayWhenSilent: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bDisableMasterEQ: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bAllowCenterChannel3DPanning: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint32 NumStoppingSources;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EPanningMethod PanningMethod;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EMonoChannelUpmixMethod MonoChannelUpmixMethod;
    
    UPROPERTY(Config, EditAnywhere)
    FString DialogueFilenameFormat;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoundDebugEntry> DebugSounds;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FDefaultAudioBusSettings> DefaultAudioBuses;
    
private:
    UPROPERTY(Transient)
    USoundClass* DefaultSoundClass;
    
    UPROPERTY(Transient)
    USoundClass* DefaultMediaSoundClass;
    
    UPROPERTY(Transient)
    USoundConcurrency* DefaultSoundConcurrency;
    
public:
    UAudioSettings();
};

