#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ELightingBuildQuality.h"
#include "MapBuildDataRegistry.generated.h"

UCLASS(MinimalAPI)
class UMapBuildDataRegistry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;
    
    UMapBuildDataRegistry();
};

