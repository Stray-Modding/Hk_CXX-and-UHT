#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceActorPointers.generated.h"

class UMovieSceneSequenceActor;
class IMovieSceneSequenceActor;
class AActor;

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

