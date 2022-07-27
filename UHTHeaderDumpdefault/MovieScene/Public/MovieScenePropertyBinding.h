#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FName PropertyPath;
    
    UPROPERTY()
    bool bCanUseClassLookup;
    
    MOVIESCENE_API FMovieScenePropertyBinding();
};

