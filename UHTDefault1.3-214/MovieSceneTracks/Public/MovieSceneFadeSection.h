#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MovieSceneFadeSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFadeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel FloatCurve;
    
    UPROPERTY(EditAnywhere)
    FLinearColor FadeColor;
    
    UPROPERTY(EditAnywhere)
    uint8 bFadeAudio: 1;
    
    UMovieSceneFadeSection();
};

