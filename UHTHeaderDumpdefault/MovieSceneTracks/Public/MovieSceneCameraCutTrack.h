#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneCameraCutTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanBlend;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneCameraCutTrack();
};

