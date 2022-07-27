#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieSceneObjectPropertySection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneObjectPropertySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectPathChannel ObjectChannel;
    
    UMovieSceneObjectPropertySection();
};

