#pragma once
#include "CoreMinimal.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionBreakMaterialAttributes.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialAttributesInput MaterialAttributes;
    
    UMaterialExpressionBreakMaterialAttributes();
};

