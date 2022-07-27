#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieSceneBuiltInEasing.h"
#include "MovieSceneEasingFunction.h"
#include "MovieSceneBuiltInEasingFunction.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneBuiltInEasingFunction : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMovieSceneBuiltInEasing Type;
    
    UMovieSceneBuiltInEasingFunction();
    
    // Fix for true pure virtual functions not being implemented
};

