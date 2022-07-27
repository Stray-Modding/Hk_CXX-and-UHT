#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnMovieSceneSequencePlayerEventDelegate.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "EMovieScenePlayerStatus.h"
#include "MovieSceneRootEvaluationTemplateInstance.h"
#include "MovieSceneSequenceReplProperties.h"
#include "MovieSceneSequencePlaybackParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EUpdatePositionMethod.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlayer.generated.h"

class UMovieSceneSequence;
class UMovieScenePlaybackClient;
class IMovieScenePlaybackClient;
class UMovieSceneSequenceTickManager;

UCLASS(Abstract, BlueprintType)
class MOVIESCENE_API UMovieSceneSequencePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnPlay;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnPlayReverse;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnPause;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnFinished;
    
protected:
    UPROPERTY()
    TEnumAsByte<EMovieScenePlayerStatus::Type> status;
    
    UPROPERTY(Replicated)
    uint8 bReversePlayback: 1;
    
    UPROPERTY(Transient)
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(Replicated)
    FFrameNumber StartTime;
    
    UPROPERTY(Replicated)
    int32 DurationFrames;
    
    UPROPERTY(Replicated)
    float DurationSubFrames;
    
    UPROPERTY(Transient)
    int32 CurrentNumLoops;
    
    UPROPERTY(Replicated)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(Transient)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
    UPROPERTY(Replicated)
    FMovieSceneSequenceReplProperties NetSyncProps;
    
    UPROPERTY(Transient)
    TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;
    
    UPROPERTY(Transient)
    UMovieSceneSequenceTickManager* TickManager;
    
public:
    UMovieSceneSequencePlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopAtCurrentTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeRange(float NewStartTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(FFrameRate FrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    
    UFUNCTION(BlueprintCallable)
    void ScrubToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool ScrubToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void ScrubToFrame(FFrameTime newPosition);
    
    UFUNCTION(BlueprintCallable)
    void Scrub();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    
    UFUNCTION(NetMulticast, Reliable)
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreState();
    
    UFUNCTION(BlueprintCallable)
    void PlayToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool PlayToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void PlayToFrame(FFrameTime newPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);
    
    UFUNCTION(BlueprintCallable)
    void PlayReverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayLooping(int32 NumLoops);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void JumpToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool JumpToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void JumpToFrame(FFrameTime newPosition);
    
    UFUNCTION(BlueprintPure)
    bool IsReversed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToEndAndStop();
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetStartTime() const;
    
    UFUNCTION(BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);
    
    UFUNCTION(BlueprintPure)
    FFrameRate GetFrameRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFrameDuration() const;
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetEndTime() const;
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDisableCameraCuts();
    
    UFUNCTION(BlueprintPure)
    FQualifiedFrameTime GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlaybackDirection();
    
};

