#pragma once
#include "CoreMinimal.h"
#include "MovieSceneKeyStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneKeyTimeStruct.generated.h"

USTRUCT()
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENE_API FMovieSceneKeyTimeStruct();
};

