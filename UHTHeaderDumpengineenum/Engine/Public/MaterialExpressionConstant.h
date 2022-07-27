#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionConstant.generated.h"

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UMaterialExpressionConstant : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float R;
    
    UMaterialExpressionConstant();
};

