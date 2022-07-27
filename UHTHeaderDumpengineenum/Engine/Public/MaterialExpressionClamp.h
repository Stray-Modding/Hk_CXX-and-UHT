#pragma once
#include "CoreMinimal.h"
#include "EClampMode.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionClamp.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionClamp : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY()
    FExpressionInput Min;
    
    UPROPERTY()
    FExpressionInput Max;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EClampMode> ClampMode;
    
    UPROPERTY(EditAnywhere)
    float MinDefault;
    
    UPROPERTY(EditAnywhere)
    float MaxDefault;
    
    UMaterialExpressionClamp();
};

