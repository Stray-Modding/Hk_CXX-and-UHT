#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicsProperties_Legacy.h"
#include "ClothingAssetData_Legacy.generated.h"

USTRUCT()
struct FClothingAssetData_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AssetName;
    
    UPROPERTY()
    FString ApexFileName;
    
    UPROPERTY()
    bool bClothPropertiesChanged;
    
    UPROPERTY()
    FClothPhysicsProperties_Legacy PhysicsProperties;
    
    ENGINE_API FClothingAssetData_Legacy();
};

