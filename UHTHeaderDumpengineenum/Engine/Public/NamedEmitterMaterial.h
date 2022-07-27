#pragma once
#include "CoreMinimal.h"
#include "NamedEmitterMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FNamedEmitterMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    ENGINE_API FNamedEmitterMaterial();
};

