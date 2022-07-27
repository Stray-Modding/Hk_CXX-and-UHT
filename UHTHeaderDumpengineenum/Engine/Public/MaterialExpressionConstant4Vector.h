#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialExpressionConstant4Vector.generated.h"

UCLASS(BlueprintType, CollapseCategories, MinimalAPI)
class UMaterialExpressionConstant4Vector : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Constant;
    
    UMaterialExpressionConstant4Vector();
};

