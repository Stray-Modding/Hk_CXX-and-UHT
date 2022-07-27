#pragma once
#include "CoreMinimal.h"
#include "EImpactDamageOverride.h"
#include "DestructibleDepthParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleDepthParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EImpactDamageOverride> ImpactDamageOverride;
    
    APEXDESTRUCTION_API FDestructibleDepthParameters();
};

