#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "StaticTerrainLayerWeightParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 WeightmapIndex;
    
    UPROPERTY()
    bool bWeightBasedBlend;
    
    ENGINE_API FStaticTerrainLayerWeightParameter();
};

