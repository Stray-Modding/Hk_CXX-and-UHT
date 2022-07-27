#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "ERuntimeVirtualTextureMaterialType.h"
#include "ERuntimeVirtualTextureTextureAddressMode.h"
#include "ERuntimeVirtualTextureMipValueMode.h"
#include "MaterialExpressionRuntimeVirtualTextureSample.generated.h"

class URuntimeVirtualTexture;

UCLASS(CollapseCategories)
class ENGINE_API UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UPROPERTY()
    FExpressionInput MipValue;
    
    UPROPERTY(EditAnywhere)
    URuntimeVirtualTexture* VirtualTexture;
    
    UPROPERTY(EditAnywhere)
    ERuntimeVirtualTextureMaterialType MaterialType;
    
    UPROPERTY(EditAnywhere)
    bool bSinglePhysicalSpace;
    
    UPROPERTY(EditAnywhere)
    bool bAdaptive;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERuntimeVirtualTextureTextureAddressMode> TextureAddressMode;
    
    UMaterialExpressionRuntimeVirtualTextureSample();
};

