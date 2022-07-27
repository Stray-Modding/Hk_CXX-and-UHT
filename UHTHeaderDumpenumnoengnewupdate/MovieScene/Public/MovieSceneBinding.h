#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneBinding.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid ObjectGuid;
    
    UPROPERTY()
    FString BindingName;
    
    UPROPERTY(Export)
    TArray<UMovieSceneTrack*> Tracks;
    
public:
    MOVIESCENE_API FMovieSceneBinding();
};

