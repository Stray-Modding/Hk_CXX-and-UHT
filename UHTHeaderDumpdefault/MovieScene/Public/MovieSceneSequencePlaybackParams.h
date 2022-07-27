#pragma once
#include "CoreMinimal.h"
#include "EUpdatePositionMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EMovieScenePositionType.h"
#include "MovieSceneSequencePlaybackParams.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequencePlaybackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameTime Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MarkedFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMovieScenePositionType PositionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUpdatePositionMethod UpdateMethod;
    
    MOVIESCENE_API FMovieSceneSequencePlaybackParams();
};

