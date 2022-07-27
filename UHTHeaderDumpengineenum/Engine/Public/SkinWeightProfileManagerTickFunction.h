#pragma once
#include "CoreMinimal.h"
#include "TickFunction.h"
#include "SkinWeightProfileManagerTickFunction.generated.h"

USTRUCT()
struct FSkinWeightProfileManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENGINE_API FSkinWeightProfileManagerTickFunction();
};

