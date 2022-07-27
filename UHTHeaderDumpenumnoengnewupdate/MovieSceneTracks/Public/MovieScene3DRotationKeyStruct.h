#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyStruct -FallbackName=MovieSceneKeyStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieScene3DRotationKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DRotationKeyStruct();
};

