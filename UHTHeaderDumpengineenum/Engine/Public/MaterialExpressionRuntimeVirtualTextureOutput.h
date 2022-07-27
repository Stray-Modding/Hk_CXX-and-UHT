#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCustomOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpressionRuntimeVirtualTextureOutput.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput BaseColor;
    
    UPROPERTY()
    FExpressionInput Specular;
    
    UPROPERTY()
    FExpressionInput Roughness;
    
    UPROPERTY()
    FExpressionInput Normal;
    
    UPROPERTY()
    FExpressionInput WorldHeight;
    
    UPROPERTY()
    FExpressionInput Opacity;
    
    UPROPERTY()
    FExpressionInput Mask;
    
    UMaterialExpressionRuntimeVirtualTextureOutput();
};

