#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "AnimNode_WheelHandler.generated.h"

USTRUCT(BlueprintType)
struct PHYSXVEHICLES_API FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_WheelHandler();
};

