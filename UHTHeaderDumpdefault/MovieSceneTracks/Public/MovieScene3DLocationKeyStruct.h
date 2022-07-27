#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyStruct -FallbackName=MovieSceneKeyStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieScene3DLocationKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DLocationKeyStruct();
};

