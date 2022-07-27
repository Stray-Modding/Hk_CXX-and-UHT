#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "EMaterialSceneAttributeInputMode.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MaterialExpressionSceneDepth.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionSceneDepth : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    
    UPROPERTY()
    FExpressionInput Input;
    
    UPROPERTY()
    FExpressionInput Coordinates;
    
    UPROPERTY(EditAnywhere)
    FVector2D ConstInput;
    
    UMaterialExpressionSceneDepth();
};

