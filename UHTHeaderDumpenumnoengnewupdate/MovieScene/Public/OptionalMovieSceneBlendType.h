#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.h"
#include "OptionalMovieSceneBlendType.generated.h"

USTRUCT(BlueprintType)
struct FOptionalMovieSceneBlendType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EMovieSceneBlendType BlendType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsValid;
    
    MOVIESCENE_API FOptionalMovieSceneBlendType();
};

