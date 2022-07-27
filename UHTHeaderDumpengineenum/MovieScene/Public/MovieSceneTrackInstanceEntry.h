#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceEntry.generated.h"

class UObject;
class UMovieSceneTrackInstance;

USTRUCT()
struct FMovieSceneTrackInstanceEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* BoundObject;
    
    UPROPERTY()
    UMovieSceneTrackInstance* TrackInstance;
    
    MOVIESCENE_API FMovieSceneTrackInstanceEntry();
};

