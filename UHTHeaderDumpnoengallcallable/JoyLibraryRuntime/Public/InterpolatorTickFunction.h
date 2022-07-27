#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "InterpolatorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FInterpolatorTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    JOYLIBRARYRUNTIME_API FInterpolatorTickFunction();
};

