#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieScenePrimitiveMaterialSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
    UMovieScenePrimitiveMaterialSection();
};

