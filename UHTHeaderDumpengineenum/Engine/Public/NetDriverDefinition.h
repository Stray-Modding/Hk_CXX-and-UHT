#pragma once
#include "CoreMinimal.h"
#include "NetDriverDefinition.generated.h"

USTRUCT(BlueprintType)
struct FNetDriverDefinition {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DefName;
    
    UPROPERTY()
    FName DriverClassName;
    
    UPROPERTY()
    FName DriverClassNameFallback;
    
    ENGINE_API FNetDriverDefinition();
};

