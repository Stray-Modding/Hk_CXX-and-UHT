#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionParameter.h"
#include "MaterialExpressionStaticComponentMaskParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DefaultR: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DefaultG: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DefaultB: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 DefaultA: 1;
    
    UMaterialExpressionStaticComponentMaskParameter();
};

