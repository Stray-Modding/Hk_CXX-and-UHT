#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "HKPlayerControllerPostUpdateTickFunction.generated.h"

USTRUCT()
struct FHKPlayerControllerPostUpdateTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    HK_PROJECT_API FHKPlayerControllerPostUpdateTickFunction();
};

