#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionMakeMaterialAttributes.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput BaseColor;
    
    UPROPERTY()
    FExpressionInput Metallic;
    
    UPROPERTY()
    FExpressionInput Specular;
    
    UPROPERTY()
    FExpressionInput Roughness;
    
    UPROPERTY()
    FExpressionInput Anisotropy;
    
    UPROPERTY()
    FExpressionInput EmissiveColor;
    
    UPROPERTY()
    FExpressionInput Opacity;
    
    UPROPERTY()
    FExpressionInput OpacityMask;
    
    UPROPERTY()
    FExpressionInput Normal;
    
    UPROPERTY()
    FExpressionInput Tangent;
    
    UPROPERTY()
    FExpressionInput WorldPositionOffset;
    
    UPROPERTY()
    FExpressionInput WorldDisplacement;
    
    UPROPERTY()
    FExpressionInput TessellationMultiplier;
    
    UPROPERTY()
    FExpressionInput SubsurfaceColor;
    
    UPROPERTY()
    FExpressionInput ClearCoat;
    
    UPROPERTY()
    FExpressionInput ClearCoatRoughness;
    
    UPROPERTY()
    FExpressionInput AmbientOcclusion;
    
    UPROPERTY()
    FExpressionInput Refraction;
    
    UPROPERTY()
    FExpressionInput CustomizedUVs[8];
    
    UPROPERTY()
    FExpressionInput PixelDepthOffset;
    
    UPROPERTY()
    FExpressionInput ShadingModel;
    
    UMaterialExpressionMakeMaterialAttributes();
};

