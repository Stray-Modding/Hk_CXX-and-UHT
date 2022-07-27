#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneKeyStruct.h"
#include "MovieSceneKeyTimeStruct.generated.h"

USTRUCT()
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENE_API FMovieSceneKeyTimeStruct();
};

