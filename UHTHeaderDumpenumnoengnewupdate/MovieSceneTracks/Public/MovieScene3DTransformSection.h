#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneTransformMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieScene3DTransformSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DTransformSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuaternionInterpolation;
    
public:
    UMovieScene3DTransformSection();
    
    // Fix for true pure virtual functions not being implemented
};

