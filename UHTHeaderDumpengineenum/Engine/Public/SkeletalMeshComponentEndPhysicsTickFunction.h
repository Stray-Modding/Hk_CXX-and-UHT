#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkeletalMeshComponentEndPhysicsTickFunction.generated.h"

USTRUCT()
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkeletalMeshComponentEndPhysicsTickFunction();
};

