#pragma once
#include "CoreMinimal.h"
#include "HLODInstancingKey.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHLODInstancingKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    ENGINE_API FHLODInstancingKey();
};

