#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
#include "PhysicalMaterialInput.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPhysicalMaterialInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY()
    FExpressionInput Input;
    
    LANDSCAPE_API FPhysicalMaterialInput();
};

