#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQueueSubtitles__DelegateSignature -FallbackName=OnQueueSubtitlesDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioFinished__DelegateSignature -FallbackName=OnAudioFinishedDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioPlaybackPercent__DelegateSignature -FallbackName=OnAudioPlaybackPercentDelegate
#include "MovieSceneAudioSection.generated.h"

class USoundAttenuation;
class USoundBase;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneAudioSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float AudioStartTime;
    
    UPROPERTY()
    float AudioDilationFactor;
    
    UPROPERTY()
    float AudioVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY()
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(EditAnywhere)
    bool bLooping;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSubtitles;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY()
    FOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY()
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY()
    FOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
public:
    UMovieSceneAudioSection();
    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintPure)
    USoundBase* GetSound() const;
    
};

