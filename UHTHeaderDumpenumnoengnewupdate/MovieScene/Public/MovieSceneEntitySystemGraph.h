#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystemGraphNodes.h"
#include "MovieSceneEntitySystemGraph.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneEntitySystemGraph {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneEntitySystemGraphNodes Nodes;
    
public:
    FMovieSceneEntitySystemGraph();
};

