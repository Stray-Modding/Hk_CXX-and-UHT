#pragma once
#include "CoreMinimal.h"
#include "AnimSegment.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAnimSegment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* AnimReference;
    
    UPROPERTY(VisibleAnywhere)
    float StartPos;
    
    UPROPERTY(EditAnywhere)
    float AnimStartTime;
    
    UPROPERTY(EditAnywhere)
    float AnimEndTime;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    int32 LoopingCount;
    
    ENGINE_API FAnimSegment();
};

