#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationHookComponent.h"
#include "MovieSceneEvaluationHookEvent.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationHookEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationHookComponent Hook;
    
    MOVIESCENE_API FMovieSceneEvaluationHookEvent();
};

