#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HLODISMComponentDesc.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT()
struct FHLODISMComponentDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    UStaticMesh* StaticMesh;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    TArray<FTransform> Instances;
    
    ENGINE_API FHLODISMComponentDesc();
};

