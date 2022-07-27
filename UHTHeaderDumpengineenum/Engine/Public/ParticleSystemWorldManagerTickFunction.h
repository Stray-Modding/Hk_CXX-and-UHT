#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "ParticleSystemWorldManagerTickFunction.generated.h"

USTRUCT()
struct FParticleSystemWorldManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FParticleSystemWorldManagerTickFunction();
};

