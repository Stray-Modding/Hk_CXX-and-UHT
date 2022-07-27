#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "MovieScene3DPathSection_Axis.h"
#include "MovieScene3DPathSectionTemplate.generated.h"

USTRUCT()
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectBindingID PathBindingID;
    
    UPROPERTY()
    FMovieSceneFloatChannel TimingCurve;
    
    UPROPERTY()
    MovieScene3DPathSection_Axis FrontAxisEnum;
    
    UPROPERTY()
    MovieScene3DPathSection_Axis UpAxisEnum;
    
    UPROPERTY()
    uint8 bFollow: 1;
    
    UPROPERTY()
    uint8 bReverse: 1;
    
    UPROPERTY()
    uint8 bForceUpright: 1;
    
    MOVIESCENETRACKS_API FMovieScene3DPathSectionTemplate();
};

