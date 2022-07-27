#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionPreviousFrameSwitch.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput CurrentFrame;
    
    UPROPERTY()
    FExpressionInput PreviousFrame;
    
    UMaterialExpressionPreviousFrameSwitch();
};

