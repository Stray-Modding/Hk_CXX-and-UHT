#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MaterialExpressionTemporalSobol.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionTemporalSobol : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Index;
    
    UPROPERTY()
    FExpressionInput Seed;
    
    UPROPERTY(EditAnywhere)
    uint32 ConstIndex;
    
    UPROPERTY(EditAnywhere)
    FVector2D ConstSeed;
    
    UMaterialExpressionTemporalSobol();
};

