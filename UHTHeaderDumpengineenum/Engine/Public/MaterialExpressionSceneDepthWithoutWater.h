#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "EMaterialSceneAttributeInputMode.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MaterialExpressionSceneDepthWithoutWater.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY(EditAnywhere)
    FVector2D ConstInput;
    
    UPROPERTY(EditAnywhere)
    float FallbackDepth;
    
    UMaterialExpressionSceneDepthWithoutWater();
};

