#pragma once
#include "CoreMinimal.h"
#include "AnimNode_AssetPlayerBase.h"
#include "InputScaleBiasClamp.h"
#include "AnimNode_SequencePlayer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRateBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp PlayRateScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoopAnimation;
    
    FAnimNode_SequencePlayer();
};

