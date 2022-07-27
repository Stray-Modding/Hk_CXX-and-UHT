#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkeletalMeshComponentClothTickFunction.generated.h"

USTRUCT()
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkeletalMeshComponentClothTickFunction();
};

