#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
#include "OnLevelSequencePlayerCameraCutEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "LevelSequencePlayer.generated.h"

class UCameraComponent;
class UObject;
class ULevelSequencePlayer;
class ULevelSequence;
class ALevelSequenceActor;

UCLASS()
class LEVELSEQUENCE_API ULevelSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLevelSequencePlayerCameraCutEvent OnCameraCut;
    
    ULevelSequencePlayer();
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetActiveCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
    
};

