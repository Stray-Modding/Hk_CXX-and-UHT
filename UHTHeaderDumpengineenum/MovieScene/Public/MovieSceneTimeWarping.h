#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimeWarping.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber Start;
    
    UPROPERTY()
    FFrameNumber End;
    
    MOVIESCENE_API FMovieSceneTimeWarping();
};

