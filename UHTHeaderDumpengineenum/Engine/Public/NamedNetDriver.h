#pragma once
#include "CoreMinimal.h"
#include "NamedNetDriver.generated.h"

class UNetDriver;

USTRUCT(BlueprintType)
struct FNamedNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UNetDriver* NetDriver;
    
    ENGINE_API FNamedNetDriver();
};

