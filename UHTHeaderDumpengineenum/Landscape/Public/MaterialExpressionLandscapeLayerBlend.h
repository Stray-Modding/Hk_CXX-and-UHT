#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "LayerBlendInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionLandscapeLayerBlend.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLayerBlendInput> Layers;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerBlend();
};

