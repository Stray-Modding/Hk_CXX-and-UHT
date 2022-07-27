#pragma once
#include "CoreMinimal.h"
#include "NameMapping.generated.h"

USTRUCT(BlueprintType)
struct FNameMapping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName NodeName;
    
    UPROPERTY()
    FName BoneName;
    
    ENGINE_API FNameMapping();
};

