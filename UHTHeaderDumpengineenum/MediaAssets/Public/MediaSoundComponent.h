#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "EMediaSoundComponentFFTSize.h"
#include "EMediaSoundChannels.h"
#include "MediaSoundComponentSpectralData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
#include "MediaSoundComponent.generated.h"

class UMediaPlayer;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAASSETS_API UMediaSoundComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMediaSoundChannels Channels;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool DynamicRateAdjustment;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float RateAdjustmentFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFloatRange RateAdjustmentRange;
    
protected:
    UPROPERTY(EditAnywhere)
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaSoundComponent();
    UFUNCTION(BlueprintCallable)
    void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMediaSoundComponentSpectralData> GetSpectralData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnvelopeValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
};

