#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneColorSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneColorSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel RedCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel GreenCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BlueCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel AlphaCurve;
    
public:
    UMovieSceneColorSection();
    
    // Fix for true pure virtual functions not being implemented
};

