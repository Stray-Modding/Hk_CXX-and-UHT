#pragma once
#include "CoreMinimal.h"
#include "MeshUVChannelInfo.h"
#include "SkeletalMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSkeletalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMeshUVChannelInfo UVChannelData;
    
    ENGINE_API FSkeletalMaterial();
};

