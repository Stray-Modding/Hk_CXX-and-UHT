#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionParameter.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionParameter : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionParameter();
};

