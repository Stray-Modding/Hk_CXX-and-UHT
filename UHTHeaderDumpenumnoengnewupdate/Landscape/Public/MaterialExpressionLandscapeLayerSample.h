#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "MaterialExpressionLandscapeLayerSample.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerSample();
};

