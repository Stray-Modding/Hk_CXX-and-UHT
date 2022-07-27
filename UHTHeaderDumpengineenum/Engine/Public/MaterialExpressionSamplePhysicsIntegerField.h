#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldIntegerType -FallbackName=EFieldIntegerType
#include "ExpressionInput.h"
#include "MaterialExpressionSamplePhysicsIntegerField.generated.h"

UCLASS()
class UMaterialExpressionSamplePhysicsIntegerField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldIntegerType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsIntegerField();
};

