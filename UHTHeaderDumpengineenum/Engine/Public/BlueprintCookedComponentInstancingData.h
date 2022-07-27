#pragma once
#include "CoreMinimal.h"
#include "BlueprintComponentChangedPropertyInfo.h"
#include "BlueprintCookedComponentInstancingData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintCookedComponentInstancingData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;
    
    UPROPERTY()
    bool bHasValidCookedData;
    
    FBlueprintCookedComponentInstancingData();
};

