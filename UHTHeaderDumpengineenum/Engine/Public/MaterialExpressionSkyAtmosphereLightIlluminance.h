#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "MaterialExpressionSkyAtmosphereLightIlluminance.generated.h"

UCLASS(BlueprintType)
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LightIndex;
    
    UPROPERTY()
    FExpressionInput WorldPosition;
    
    UMaterialExpressionSkyAtmosphereLightIlluminance();
};

