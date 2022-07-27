#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneStringChannel -FallbackName=MovieSceneStringChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneTakeSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneTakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneIntegerChannel HoursCurve;
    
    UPROPERTY()
    FMovieSceneIntegerChannel MinutesCurve;
    
    UPROPERTY()
    FMovieSceneIntegerChannel SecondsCurve;
    
    UPROPERTY()
    FMovieSceneIntegerChannel FramesCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel SubFramesCurve;
    
    UPROPERTY()
    FMovieSceneStringChannel Slate;
    
    UMovieSceneTakeSection();
};

