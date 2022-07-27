#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimNode_SkeletalControlBase.h"
#include "AngularRangeLimit.h"
#include "AnimNode_ApplyLimits.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAngularRangeLimit> AngularRangeLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector> AngularOffsets;
    
    FAnimNode_ApplyLimits();
};

