#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneFadeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel FadeCurve;
    
    UPROPERTY()
    FLinearColor FadeColor;
    
    UPROPERTY()
    uint8 bFadeAudio: 1;
    
public:
    MOVIESCENETRACKS_API FMovieSceneFadeSectionTemplate();
};

