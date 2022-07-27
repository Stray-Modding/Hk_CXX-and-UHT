#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightDiskLuminance.generated.h"

UCLASS(BlueprintType)
class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LightIndex;
    
    UMaterialExpressionSkyAtmosphereLightDiskLuminance();
};

