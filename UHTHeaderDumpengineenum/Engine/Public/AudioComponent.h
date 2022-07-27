#pragma once
#include "CoreMinimal.h"
#include "EAudioComponentPlayState.h"
#include "SceneComponent.h"
#include "OnAudioVirtualizationChangedDelegate.h"
#include "AudioComponentParam.h"
#include "SoundAttenuationSettings.h"
#include "EAttachmentRule.h"
#include "SoundModulationDefaultRoutingSettings.h"
#include "OnAudioPlayStateChangedDelegate.h"
#include "OnAudioFinishedDelegate.h"
#include "OnAudioPlaybackPercentDelegate.h"
#include "OnAudioSingleEnvelopeValueDelegate.h"
#include "OnAudioMultiEnvelopeValueDelegate.h"
#include "OnQueueSubtitlesDelegate.h"
#include "QuartzQuantizationBoundary.h"
#include "OnQuartzCommandEventBPDelegate.h"
#include "EAudioFaderCurve.h"
#include "SoundWaveEnvelopeDataPerSound.h"
#include "SoundWaveSpectralDataPerSound.h"
#include "SoundWaveSpectralData.h"
#include "AudioComponent.generated.h"

class USoundEffectSourcePresetChain;
class USoundBase;
class USoundClass;
class USoundAttenuation;
class USoundConcurrency;
class USoundWave;
class USoundSubmixBase;
class USoundSourceBus;
class UAudioBus;
class UObject;
class UQuartzClockHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UAudioComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FAudioComponentParam> InstanceParameters;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    USoundClass* SoundClassOverride;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY()
    uint8 bShouldRemainActiveIfDropped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowSpatialization: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideSubtitlePriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableLowPassFilter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverridePriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSuppressSubtitles: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoManageAttachment: 1;
    
    UPROPERTY()
    FName AudioComponentUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchModulationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchModulationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeModulationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeModulationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SubtitlePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LowPassFilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
    UPROPERTY()
    USoundConcurrency* ConcurrencySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<USoundConcurrency*> ConcurrencySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachScaleRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDefaultRoutingSettings ModulationRouting;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioPlayStateChanged OnAudioPlayStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioVirtualizationChanged OnAudioVirtualizationChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioSingleEnvelopeValue OnAudioSingleEnvelopeValue;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioMultiEnvelopeValue OnAudioMultiEnvelopeValue;
    
    UPROPERTY()
    FOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleInstanceOnly)
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AutoAttachSocketName;
    
    UAudioComponent();
    UFUNCTION(BlueprintCallable)
    void StopDelayed(float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetWaveParameter(FName InName, USoundWave* InWave);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetUISound(bool bInUISound);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameter(FName InName, int32 inInt);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName InName, float InFloat);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameter(FName InName, bool InBool);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel);
    
    UFUNCTION(BlueprintCallable)
    void PlayQuantized(const UObject* WorldContextObject, UPARAM(Ref) UQuartzClockHandle*& InClockHandle, UPARAM(Ref) FQuartzQuantizationBoundary& InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, float InStartTime, float InFadeInDuration, float InFadeVolumeLevel, EAudioFaderCurve InFadeCurve);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintPure)
    bool IsVirtualized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCookedFFTData() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCookedAmplitudeEnvelopeData() const;
    
    UFUNCTION(BlueprintPure)
    EAudioComponentPlayState GetPlayState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData);
    
    UFUNCTION(BlueprintCallable)
    bool GetCookedEnvelopeData(float& OutEnvelopeData);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
    
};

