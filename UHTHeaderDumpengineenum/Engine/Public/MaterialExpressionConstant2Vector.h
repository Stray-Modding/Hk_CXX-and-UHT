#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionConstant2Vector.generated.h"

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UMaterialExpressionConstant2Vector : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float G;
    
    UMaterialExpressionConstant2Vector();
};

