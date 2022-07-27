#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldVectorType -FallbackName=EFieldVectorType
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSamplePhysicsVectorField.generated.h"

UCLASS()
class UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldVectorType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsVectorField();
};

