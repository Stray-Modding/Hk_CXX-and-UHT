#pragma once
#include "CoreMinimal.h"
#include "LayerActorStats.generated.h"

USTRUCT(BlueprintType)
struct FLayerActorStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* Type;
    
    UPROPERTY()
    int32 Total;
    
    ENGINE_API FLayerActorStats();
};

