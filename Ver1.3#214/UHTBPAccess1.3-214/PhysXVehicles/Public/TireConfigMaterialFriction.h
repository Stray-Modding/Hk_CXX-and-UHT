#pragma once
#include "CoreMinimal.h"
#include "TireConfigMaterialFriction.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FTireConfigMaterialFriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionScale;
    
    PHYSXVEHICLES_API FTireConfigMaterialFriction();
};

