#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationHookComponent.generated.h"

class UMovieSceneEvaluationHook;
class IMovieSceneEvaluationHook;

USTRUCT()
struct FMovieSceneEvaluationHookComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IMovieSceneEvaluationHook> Interface;
    
    MOVIESCENE_API FMovieSceneEvaluationHookComponent();
};

