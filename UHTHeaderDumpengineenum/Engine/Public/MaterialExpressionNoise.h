#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
#include "ENoiseFunction.h"
#include "MaterialExpressionNoise.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionNoise : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Position;
    
    UPROPERTY()
    FExpressionInput FilterWidth;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    int32 Quality;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENoiseFunction> NoiseFunction;
    
    UPROPERTY(EditAnywhere)
    uint8 bTurbulence: 1;
    
    UPROPERTY(EditAnywhere)
    int32 Levels;
    
    UPROPERTY(EditAnywhere)
    float OutputMin;
    
    UPROPERTY(EditAnywhere)
    float OutputMax;
    
    UPROPERTY(EditAnywhere)
    float LevelScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bTiling: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 RepeatSize;
    
    UMaterialExpressionNoise();
};

