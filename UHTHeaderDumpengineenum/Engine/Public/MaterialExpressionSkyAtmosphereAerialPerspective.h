#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSkyAtmosphereAerialPerspective.generated.h"

UCLASS()
class UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UMaterialExpressionSkyAtmosphereAerialPerspective();
};

