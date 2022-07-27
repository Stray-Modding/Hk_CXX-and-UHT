#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionParameter.h"
#include "MaterialExpressionScalarParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomPrimitiveData;
    
    UPROPERTY(EditAnywhere)
    uint8 PrimitiveDataIndex;
    
    UMaterialExpressionScalarParameter();
};

