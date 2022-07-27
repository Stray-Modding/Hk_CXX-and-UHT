#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldScalarType -FallbackName=EFieldScalarType
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSamplePhysicsScalarField.generated.h"

UCLASS()
class UMaterialExpressionSamplePhysicsScalarField : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldScalarType> FieldTarget;
    
    UMaterialExpressionSamplePhysicsScalarField();
};

