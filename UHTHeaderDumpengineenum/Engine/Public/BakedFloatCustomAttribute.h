#pragma once
#include "CoreMinimal.h"
#include "SimpleCurve.h"
#include "BakedFloatCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedFloatCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName AttributeName;
    
    UPROPERTY(VisibleAnywhere)
    FSimpleCurve FloatCurve;
    
    ENGINE_API FBakedFloatCustomAttribute();
};

