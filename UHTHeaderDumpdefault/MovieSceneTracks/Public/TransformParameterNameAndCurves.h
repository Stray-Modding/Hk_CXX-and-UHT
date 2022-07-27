#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "TransformParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FTransformParameterNameAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[3];
    
    FTransformParameterNameAndCurves();
};

