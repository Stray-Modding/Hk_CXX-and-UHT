#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroupLUTIndex.h"
#include "MovieSceneFieldEntry_EvaluationTrack.h"
#include "MovieSceneFieldEntry_ChildTemplate.h"
#include "MovieSceneEvaluationGroup.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    
    UPROPERTY()
    TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;
    
    UPROPERTY()
    TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT;
    
    MOVIESCENE_API FMovieSceneEvaluationGroup();
};

