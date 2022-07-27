#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntityKey.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldEntityKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UObject> EntityOwner;
    
    UPROPERTY()
    uint32 EntityID;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldEntityKey();
};

