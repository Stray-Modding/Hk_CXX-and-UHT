#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionHairAttributes.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionHairAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseTangentSpace: 1;
    
    UMaterialExpressionHairAttributes();
};

