#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationHookEventContainer.h"
#include "MovieSceneEvaluationInstanceKey.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvaluationHookSystem.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;
    
public:
    UMovieSceneEvaluationHookSystem();
};

