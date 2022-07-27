#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionParameter.h"
#include "MaterialExpressionStaticBoolParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DefaultValue: 1;
    
    UMaterialExpressionStaticBoolParameter();
};

