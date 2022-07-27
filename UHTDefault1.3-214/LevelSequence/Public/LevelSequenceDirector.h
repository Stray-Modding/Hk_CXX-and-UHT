#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "LevelSequenceDirector.generated.h"

class UMovieSceneSequence;
class ULevelSequencePlayer;
class AActor;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequenceDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ULevelSequencePlayer* Player;
    
    UPROPERTY()
    int32 SubSequenceID;
    
    UPROPERTY()
    int32 MovieScenePlayerIndex;
    
    ULevelSequenceDirector();
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreated();
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneSequence* GetSequence();
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
    
};

