#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "ActorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FActorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FActorTickFunction();
};

