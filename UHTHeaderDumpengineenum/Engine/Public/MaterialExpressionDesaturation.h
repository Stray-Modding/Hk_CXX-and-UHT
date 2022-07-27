#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ExpressionInput.h"
#include "MaterialExpressionDesaturation.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionDesaturation : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY()
    FExpressionInput Fraction;
    
    UPROPERTY(EditAnywhere)
    FLinearColor LuminanceFactors;
    
    UMaterialExpressionDesaturation();
};

