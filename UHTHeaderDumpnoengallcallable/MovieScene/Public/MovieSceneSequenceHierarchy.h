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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceHierarchyNode RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSubSequenceTree tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;
    
public:
    MOVIESCENE_API FMovieSceneSequenceHierarchy();
};

