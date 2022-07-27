#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.h"
#include "StaticMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FStaticMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MaterialSlotName;
    
    UPROPERTY(VisibleAnywhere)
    FName ImportedMaterialSlotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMeshUVChannelInfo UVChannelData;
    
    ENGINE_API FStaticMaterial();
};

