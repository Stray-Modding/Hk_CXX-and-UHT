#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvaluationHook.h"
#include "MovieSceneHookSection.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneHookSection : public UMovieSceneSection, public IMovieSceneEntityProvider, public IMovieSceneEvaluationHook {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bRequiresRangedHook: 1;
    
    UPROPERTY()
    uint8 bRequiresTriggerHooks: 1;
    
public:
    UMovieSceneHookSection();
    
    // Fix for true pure virtual functions not being implemented
};

