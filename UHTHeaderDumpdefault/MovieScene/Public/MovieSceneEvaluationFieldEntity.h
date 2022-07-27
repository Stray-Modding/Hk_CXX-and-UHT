#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntityKey.h"
#include "MovieSceneEvaluationFieldEntity.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldEntity {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationFieldEntityKey Key;
    
    UPROPERTY()
    int32 SharedMetaDataIndex;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldEntity();
};

