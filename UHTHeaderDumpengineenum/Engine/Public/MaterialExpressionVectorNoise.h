#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "EVectorNoiseFunction.h"
#include "MaterialExpressionVectorNoise.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionVectorNoise : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Position;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVectorNoiseFunction> NoiseFunction;
    
    UPROPERTY(EditAnywhere)
    int32 Quality;
    
    UPROPERTY(EditAnywhere)
    uint8 bTiling: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 TileSize;
    
    UMaterialExpressionVectorNoise();
};

