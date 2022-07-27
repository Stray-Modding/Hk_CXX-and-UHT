#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTrackInstanceInput.h"
#include "MovieSceneTrackInstance.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Transient)
class MOVIESCENE_API UMovieSceneTrackInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UObject* AnimatedObject;
    
    UPROPERTY()
    bool bIsMasterTrackInstance;
    
    UPROPERTY()
    UMovieSceneEntitySystemLinker* Linker;
    
    UPROPERTY()
    TArray<FMovieSceneTrackInstanceInput> Inputs;
    
public:
    UMovieSceneTrackInstance();
};

