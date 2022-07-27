#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightDirection.generated.h"

UCLASS(BlueprintType)
class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LightIndex;
    
    UMaterialExpressionSkyAtmosphereLightDirection();
};

