#pragma once
#include "CoreMinimal.h"
#include "Timespan.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FTimespan {
    GENERATED_BODY()
public:
    COREUOBJECT_API FTimespan();
};

