#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyStruct -FallbackName=MovieSceneKeyStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieScene3DTransformKeyStruct.generated.h"

USTRUCT()
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieScene3DTransformKeyStruct();
};

