#pragma once
#include "CoreMinimal.h"
#include "StringCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FStringCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    FString Value;
    
    FStringCurveKey();
};

