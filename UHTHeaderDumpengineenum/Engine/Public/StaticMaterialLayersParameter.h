#pragma once
#include "CoreMinimal.h"
#include "StaticParameterBase.h"
#include "MaterialLayersFunctions.h"
#include "StaticMaterialLayersParameter.generated.h"

USTRUCT(BlueprintType)
struct FStaticMaterialLayersParameter : public FStaticParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialLayersFunctions Value;
    
    ENGINE_API FStaticMaterialLayersParameter();
};

