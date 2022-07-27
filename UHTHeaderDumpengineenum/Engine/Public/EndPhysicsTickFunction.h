#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "EndPhysicsTickFunction.generated.h"

USTRUCT()
struct FEndPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FEndPhysicsTickFunction();
};

