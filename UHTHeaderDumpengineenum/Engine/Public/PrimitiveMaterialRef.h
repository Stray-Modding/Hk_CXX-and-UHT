#pragma once
#include "CoreMinimal.h"
#include "PrimitiveMaterialRef.generated.h"

class UPrimitiveComponent;
class UDecalComponent;

USTRUCT(BlueprintType)
struct FPrimitiveMaterialRef {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* Primitive;
    
    UPROPERTY(Export)
    UDecalComponent* Decal;
    
    UPROPERTY()
    int32 ElementIndex;
    
    ENGINE_API FPrimitiveMaterialRef();
};

