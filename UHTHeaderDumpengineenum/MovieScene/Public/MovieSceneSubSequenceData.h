#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceInstanceDataPtr.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneSequenceTransform.h"
#include "MovieSceneFrameRange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MovieSceneSequenceID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSubSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSubSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSoftObjectPath Sequence;
    
    UPROPERTY()
    FMovieSceneSequenceTransform OuterToInnerTransform;
    
    UPROPERTY()
    FMovieSceneSequenceTransform RootToSequenceTransform;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FMovieSceneSequenceID DeterministicSequenceID;
    
    UPROPERTY()
    FMovieSceneFrameRange ParentPlayRange;
    
    UPROPERTY()
    FFrameNumber ParentStartFrameOffset;
    
    UPROPERTY()
    FFrameNumber ParentEndFrameOffset;
    
    UPROPERTY()
    FFrameNumber ParentFirstLoopStartFrameOffset;
    
    UPROPERTY()
    bool bCanLoop;
    
    UPROPERTY()
    FMovieSceneFrameRange PlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange FullPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange UnwarpedPlayRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PreRollRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PostRollRange;
    
    UPROPERTY()
    int16 HierarchicalBias;
    
    UPROPERTY()
    bool bHasHierarchicalEasing;
    
    UPROPERTY()
    FMovieSceneSequenceInstanceDataPtr InstanceData;
    
private:
    UPROPERTY()
    FGuid SubSectionSignature;
    
public:
    MOVIESCENE_API FMovieSceneSubSequenceData();
};

