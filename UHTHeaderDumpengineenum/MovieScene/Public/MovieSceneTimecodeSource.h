#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneTimecodeSource.generated.h"

USTRUCT()
struct FMovieSceneTimecodeSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTimecode Timecode;
    
    UPROPERTY(VisibleAnywhere)
    FFrameNumber DeltaFrame;
    
    MOVIESCENE_API FMovieSceneTimecodeSource();
};

