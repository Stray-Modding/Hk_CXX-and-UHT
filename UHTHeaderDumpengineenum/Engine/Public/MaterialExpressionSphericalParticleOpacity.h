#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSphericalParticleOpacity.generated.h"

UCLASS(CollapseCategories)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Density;
    
    UPROPERTY(EditAnywhere)
    float ConstantDensity;
    
    UMaterialExpressionSphericalParticleOpacity();
};

