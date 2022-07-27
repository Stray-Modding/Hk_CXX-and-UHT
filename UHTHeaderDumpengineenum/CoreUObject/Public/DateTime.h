#pragma once
#include "CoreMinimal.h"
#include "DateTime.generated.h"

USTRUCT(Atomic, BlueprintType, Immutable, NoExport)
struct FDateTime {
    GENERATED_BODY()
public:
    COREUOBJECT_API FDateTime();
};

