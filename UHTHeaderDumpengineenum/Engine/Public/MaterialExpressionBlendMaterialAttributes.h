#pragma once
#include "CoreMinimal.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
#include "EMaterialAttributeBlend.h"
#include "ExpressionInput.h"
#include "MaterialExpressionBlendMaterialAttributes.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMaterialAttributesInput A;
    
    UPROPERTY()
    FMaterialAttributesInput B;
    
    UPROPERTY()
    FExpressionInput Alpha;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialAttributeBlend::Type> PixelAttributeBlendType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialAttributeBlend::Type> VertexAttributeBlendType;
    
    UMaterialExpressionBlendMaterialAttributes();
};

