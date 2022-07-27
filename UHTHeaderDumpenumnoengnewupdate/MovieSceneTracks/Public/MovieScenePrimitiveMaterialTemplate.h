#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectPathChannel -FallbackName=MovieSceneObjectPathChannel
#include "MovieScenePrimitiveMaterialTemplate.generated.h"

USTRUCT()
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
public:
    MOVIESCENETRACKS_API FMovieScenePrimitiveMaterialTemplate();
};

