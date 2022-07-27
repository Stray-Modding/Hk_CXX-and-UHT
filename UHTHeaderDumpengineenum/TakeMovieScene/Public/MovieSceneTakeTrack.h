#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneTakeTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneTakeTrack();
};

