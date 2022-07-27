#pragma once
#include "CoreMinimal.h"
#include "DebugDisplayProperty.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FDebugDisplayProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Obj;
    
    UPROPERTY()
    UClass* WithinClass;
    
    ENGINE_API FDebugDisplayProperty();
};

