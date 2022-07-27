#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionParameter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialExpressionVectorParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor DefaultValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomPrimitiveData;
    
    UPROPERTY(EditAnywhere)
    uint8 PrimitiveDataIndex;
    
    UMaterialExpressionVectorParameter();
};

