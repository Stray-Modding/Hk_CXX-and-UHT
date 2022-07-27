#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceActorPointers.generated.h"

class AActor;
class UMovieSceneSequenceActor;
class IMovieSceneSequenceActor;

USTRUCT(BlueprintType)
struct FMovieSceneSequenceActorPointers {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SequenceActor;
    
    UPROPERTY()
    TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface;
    
    MOVIESCENE_API FMovieSceneSequenceActorPointers();
};

