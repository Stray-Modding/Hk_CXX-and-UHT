#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCacheParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneGeometryCacheSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneGeometryCacheParams Params;
    
    UMovieSceneGeometryCacheSection();
};

