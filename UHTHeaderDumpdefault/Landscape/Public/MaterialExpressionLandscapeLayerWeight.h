#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionLandscapeLayerWeight.generated.h"

UCLASS(CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Base;
    
    UPROPERTY()
    FExpressionInput Layer;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    float PreviewWeight;
    
    UPROPERTY(EditAnywhere)
    FVector ConstBase;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UMaterialExpressionLandscapeLayerWeight();
};

