#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceHierarchyNode.h"
#include "MovieSceneSubSequenceTree.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSubSequenceData.h"
#include "MovieSceneSequenceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneSequenceHierarchyNode RootNode;
    
    UPROPERTY()
    FMovieSceneSubSequenceTree tree;
    
    UPROPERTY()
    TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;
    
    UPROPERTY()
    TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;
    
public:
    MOVIESCENE_API FMovieSceneSequenceHierarchy();
};

