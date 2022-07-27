#pragma once
#include "CoreMinimal.h"
#include "TireConfigMaterialFriction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TireConfig.generated.h"

UCLASS()
class PHYSXVEHICLES_API UTireConfig : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float FrictionScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FTireConfigMaterialFriction> TireFrictionScales;
    
public:
    UTireConfig();
};

