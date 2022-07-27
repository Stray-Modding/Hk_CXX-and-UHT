#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "OnSamplePlaybackProgressDelegate.h"
#include "OnSampleLoadedDelegate.h"
#include "ESamplePlayerSeekType.h"
#include "SynthSamplePlayer.generated.h"

class USoundWave;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API USynthSamplePlayer : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintAssignable)
    FOnSampleLoaded OnSampleLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FOnSamplePlaybackProgress OnSamplePlaybackProgress;
    
    USynthSamplePlayer();
    UFUNCTION(BlueprintCallable)
    void SetSoundWave(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubMode(bool bScrubMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float InPitch, float TimeSec);
    
    UFUNCTION(BlueprintCallable)
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintPure)
    float GetSampleDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPlaybackProgressTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPlaybackProgressPercent() const;
    
};

