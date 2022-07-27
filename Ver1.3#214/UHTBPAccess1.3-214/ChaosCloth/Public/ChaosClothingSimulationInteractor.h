#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothingSimulationInteractor -FallbackName=ClothingSimulationInteractor
#include "ChaosClothingSimulationInteractor.generated.h"

UCLASS(Blueprintable)
class CHAOSCLOTH_API UChaosClothingSimulationInteractor : public UClothingSimulationInteractor {
    GENERATED_BODY()
public:
    UChaosClothingSimulationInteractor();
};

