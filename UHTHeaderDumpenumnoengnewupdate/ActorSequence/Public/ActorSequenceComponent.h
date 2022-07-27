#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ActorSequenceComponent.generated.h"

class UActorSequence;
class UActorSequencePlayer;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ACTORSEQUENCE_API UActorSequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActorSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UActorSequencePlayer* SequencePlayer;
    
public:
    UActorSequenceComponent();
};

