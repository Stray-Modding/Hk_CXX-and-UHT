#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "CatPawnTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCatPawnTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FCatPawnTickFunction();
};

