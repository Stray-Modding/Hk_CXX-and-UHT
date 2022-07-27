#pragma once
#include "CoreMinimal.h"
#include "TireConfigMaterialFriction.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FTireConfigMaterialFriction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    float FrictionScale;
    
    PHYSXVEHICLES_API FTireConfigMaterialFriction();
};

