#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "StartPhysicsTickFunction.generated.h"

USTRUCT()
struct FStartPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FStartPhysicsTickFunction();
};

