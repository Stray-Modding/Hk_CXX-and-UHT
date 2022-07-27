#pragma once
#include "CoreMinimal.h"
#include "StringCurve.h"
#include "BakedStringCustomAttribute.generated.h"

USTRUCT(BlueprintType)
struct FBakedStringCustomAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName AttributeName;
    
    UPROPERTY(VisibleAnywhere)
    FStringCurve StringCurve;
    
    ENGINE_API FBakedStringCustomAttribute();
};

