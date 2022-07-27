#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicalMeshData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothCollisionData -FallbackName=ClothCollisionData
#include "ClothLODDataCommon.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMECOMMON_API FClothLODDataCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FClothPhysicalMeshData PhysicalMeshData;
    
    UPROPERTY(EditAnywhere)
    FClothCollisionData CollisionData;
    
    UPROPERTY()
    bool bUseMultipleInfluences;
    
    UPROPERTY()
    float SkinningKernelRadius;
    
    FClothLODDataCommon();
};

