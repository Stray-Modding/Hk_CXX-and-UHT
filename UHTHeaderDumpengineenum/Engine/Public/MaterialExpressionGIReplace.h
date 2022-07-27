#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionGIReplace.generated.h"

UCLASS()
class UMaterialExpressionGIReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Default;
    
    UPROPERTY()
    FExpressionInput StaticIndirect;
    
    UPROPERTY()
    FExpressionInput DynamicIndirect;
    
    UMaterialExpressionGIReplace();
};

