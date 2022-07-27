#pragma once
#include "CoreMinimal.h"
#include "AnimLinkableElement.h"
#include "BranchingPoint.generated.h"

USTRUCT(BlueprintType)
struct FBranchingPoint : public FAnimLinkableElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY()
    float DisplayTime;
    
    UPROPERTY()
    float TriggerTimeOffset;
    
    ENGINE_API FBranchingPoint();
};

