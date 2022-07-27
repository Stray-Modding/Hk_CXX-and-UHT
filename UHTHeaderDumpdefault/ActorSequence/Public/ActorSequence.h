#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "ActorSequenceObjectReferenceMap.h"
#include "ActorSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class ACTORSEQUENCE_API UActorSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    FActorSequenceObjectReferenceMap ObjectReferences;
    
public:
    UActorSequence();
};

