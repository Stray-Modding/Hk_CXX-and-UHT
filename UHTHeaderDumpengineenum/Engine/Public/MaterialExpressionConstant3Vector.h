#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialExpressionConstant3Vector.generated.h"

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UMaterialExpressionConstant3Vector : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Constant;
    
    UMaterialExpressionConstant3Vector();
};

