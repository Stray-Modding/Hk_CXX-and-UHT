#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertySectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FString PropertyPath;
    
    MOVIESCENE_API FMovieScenePropertySectionData();
};

