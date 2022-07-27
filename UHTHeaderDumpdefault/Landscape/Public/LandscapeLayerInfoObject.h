#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LandscapeLayerInfoObject.generated.h"

class UPhysicalMaterial;

UCLASS(MinimalAPI)
class ULandscapeLayerInfoObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    FName LayerName;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(EditAnywhere)
    float Hardness;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LayerUsageDebugColor;
    
    ULandscapeLayerInfoObject();
};

