#pragma once
#include "CoreMinimal.h"
#include "IntegralCurve.h"
#include "BakedIntegerCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedIntegerCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName AttributeName;
    
    UPROPERTY(VisibleAnywhere)
    FIntegralCurve IntCurve;
    
    ENGINE_API FBakedIntegerCustomAttribute();
};

