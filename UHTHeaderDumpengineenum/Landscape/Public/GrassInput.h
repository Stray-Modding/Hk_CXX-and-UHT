#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
#include "GrassInput.generated.h"

class ULandscapeGrassType;

USTRUCT(BlueprintType)
struct FGrassInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    ULandscapeGrassType* GrassType;
    
    UPROPERTY()
    FExpressionInput Input;
    
    LANDSCAPE_API FGrassInput();
};

