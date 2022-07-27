#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "EEvaluatorDataSource.h"
#include "EEvaluatorMode.h"
#include "AnimNode_TransitionPoseEvaluator.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FramesToCachePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEvaluatorDataSource::Type> DataSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEvaluatorMode::Type> EvaluatorMode;
    
    FAnimNode_TransitionPoseEvaluator();
};

