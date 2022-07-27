#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothCollisionData -FallbackName=ClothCollisionData
#include "ClothPhysicalMeshData.h"
#include "ClothLODDataCommon_Legacy.generated.h"

class UClothPhysicalMeshDataBase_Legacy;

UCLASS()
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothLODDataCommon_Legacy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;
    
    UPROPERTY()
    FClothPhysicalMeshData ClothPhysicalMeshData;
    
    UPROPERTY()
    FClothCollisionData CollisionData;
    
    UClothLODDataCommon_Legacy();
};

