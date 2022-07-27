#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneBoolChannel.h"
#include "MovieSceneBoolSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool DefaultValue;
    
protected:
    UPROPERTY()
    FMovieSceneBoolChannel BoolCurve;
    
public:
    UMovieSceneBoolSection();
};

