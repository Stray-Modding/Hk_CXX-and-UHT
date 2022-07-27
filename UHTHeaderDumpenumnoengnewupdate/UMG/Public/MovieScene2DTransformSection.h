#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieScene2DTransformMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieScene2DTransformSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene2DTransformSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieScene2DTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation;
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Shear[2];
    
    UMovieScene2DTransformSection();
    
    // Fix for true pure virtual functions not being implemented
};

