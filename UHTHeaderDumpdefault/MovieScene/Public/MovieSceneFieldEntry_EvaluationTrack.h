#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldTrackPtr.h"
#include "MovieSceneFieldEntry_EvaluationTrack.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFieldEntry_EvaluationTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationFieldTrackPtr TrackPtr;
    
    UPROPERTY()
    uint16 NumChildren;
    
    MOVIESCENE_API FMovieSceneFieldEntry_EvaluationTrack();
};

