#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionDepthFade.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionDepthFade : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput InOpacity;
    
    UPROPERTY()
    FExpressionInput FadeDistance;
    
    UPROPERTY(EditAnywhere)
    float OpacityDefault;
    
    UPROPERTY(EditAnywhere)
    float FadeDistanceDefault;
    
    UMaterialExpressionDepthFade();
};

