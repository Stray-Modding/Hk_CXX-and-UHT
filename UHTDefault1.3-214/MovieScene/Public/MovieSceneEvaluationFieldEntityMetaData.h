#pragma once
#include "CoreMinimal.h"
#include "ESectionEvaluationFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneEvaluationFieldEntityMetaData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldEntityMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString OverrideBoundPropertyPath;
    
    UPROPERTY()
    FFrameNumber ForcedTime;
    
    UPROPERTY()
    ESectionEvaluationFlags Flags;
    
    UPROPERTY()
    uint8 bEvaluateInSequencePreRoll: 1;
    
    UPROPERTY()
    uint8 bEvaluateInSequencePostRoll: 1;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldEntityMetaData();
};

