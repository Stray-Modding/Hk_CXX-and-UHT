#pragma once
#include "CoreMinimal.h"
#include "StaticSwitchParameter.h"
#include "StaticComponentMaskParameter.h"
#include "StaticTerrainLayerWeightParameter.h"
#include "StaticMaterialLayersParameter.h"
#include "StaticParameterSet.generated.h"

USTRUCT(BlueprintType)
struct FStaticParameterSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FStaticSwitchParameter> StaticSwitchParameters;
    
    UPROPERTY()
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;
    
    UPROPERTY()
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;
    
    UPROPERTY()
    TArray<FStaticMaterialLayersParameter> MaterialLayersParameters;
    
    ENGINE_API FStaticParameterSet();
};

