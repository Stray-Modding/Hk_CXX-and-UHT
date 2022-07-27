#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "ColorParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FColorParameterNameAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneFloatChannel RedCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel GreenCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BlueCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel AlphaCurve;
    
    FColorParameterNameAndCurves();
};

