#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothPhysicalMeshDataBase_Legacy -FallbackName=ClothPhysicalMeshDataBase_Legacy
#include "ClothPhysicalMeshDataNv_Legacy.generated.h"

UCLASS()
class CLOTHINGSYSTEMRUNTIMENV_API UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> MaxDistances;
    
    UPROPERTY()
    TArray<float> BackstopDistances;
    
    UPROPERTY()
    TArray<float> BackstopRadiuses;
    
    UPROPERTY()
    TArray<float> AnimDriveMultipliers;
    
    UClothPhysicalMeshDataNv_Legacy();
};

