#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.h"
#include "PoseLink.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FPoseLink : public FPoseLinkBase {
    GENERATED_BODY()
public:
    FPoseLink();
};

