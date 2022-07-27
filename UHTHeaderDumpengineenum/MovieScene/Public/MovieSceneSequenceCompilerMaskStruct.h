#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceCompilerMaskStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceCompilerMaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bHierarchy: 1;
    
    UPROPERTY()
    uint8 bEvaluationTemplate: 1;
    
    UPROPERTY()
    uint8 bEvaluationTemplateField: 1;
    
    UPROPERTY()
    uint8 bEntityComponentField: 1;
    
    MOVIESCENE_API FMovieSceneSequenceCompilerMaskStruct();
};

