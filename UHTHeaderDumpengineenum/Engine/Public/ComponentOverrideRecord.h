#pragma once
#include "CoreMinimal.h"
#include "ComponentKey.h"
#include "BlueprintCookedComponentInstancingData.h"
#include "ComponentOverrideRecord.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FComponentOverrideRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* ComponentClass;
    
    UPROPERTY(Export)
    UActorComponent* ComponentTemplate;
    
    UPROPERTY()
    FComponentKey ComponentKey;
    
    UPROPERTY()
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
    
    ENGINE_API FComponentOverrideRecord();
};

