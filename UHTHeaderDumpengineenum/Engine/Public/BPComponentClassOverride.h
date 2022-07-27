#pragma once
#include "CoreMinimal.h"
#include "BPComponentClassOverride.generated.h"

USTRUCT(BlueprintType)
struct FBPComponentClassOverride {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ComponentName;
    
    UPROPERTY()
    UClass* ComponentClass;
    
    ENGINE_API FBPComponentClassOverride();
};

