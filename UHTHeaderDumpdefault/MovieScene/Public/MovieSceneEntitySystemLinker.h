#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntitySystemGraph.h"
#include "MovieSceneEntitySystemLinker.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneEntitySystemLinker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEntitySystemGraph SystemGraph;
    
    UMovieSceneEntitySystemLinker();
};

