#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionLightmassReplace.generated.h"

UCLASS()
class UMaterialExpressionLightmassReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Realtime;
    
    UPROPERTY()
    FExpressionInput Lightmass;
    
    UMaterialExpressionLightmassReplace();
};

