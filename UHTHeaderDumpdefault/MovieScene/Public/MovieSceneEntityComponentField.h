#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntityTree.h"
#include "MovieSceneEvaluationFieldEntityMetaData.h"
#include "MovieSceneEvaluationFieldEntity.h"
#include "MovieSceneEvaluationFieldSharedEntityMetaData.h"
#include "MovieSceneEntityComponentField.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneEntityComponentField {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;
    
    UPROPERTY()
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationFieldEntity> Entities;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;
    
public:
    FMovieSceneEntityComponentField();
};

