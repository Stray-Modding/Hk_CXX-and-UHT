#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionSetMaterialAttributes.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FExpressionInput> Inputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FGuid> AttributeSetTypes;
    
    UMaterialExpressionSetMaterialAttributes();
};

