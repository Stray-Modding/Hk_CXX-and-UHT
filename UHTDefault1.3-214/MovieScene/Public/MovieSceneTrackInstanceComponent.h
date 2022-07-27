#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneTrackInstanceComponent.generated.h"

class UMovieSceneSection;
class UMovieSceneTrackInstance;

USTRUCT()
struct FMovieSceneTrackInstanceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneSection* Owner;
    
    UPROPERTY()
    TSubclassOf<UMovieSceneTrackInstance> TrackInstanceClass;
    
    MOVIESCENE_API FMovieSceneTrackInstanceComponent();
};

