#pragma once
#include "CoreMinimal.h"
#include "NameCurveKey.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNameCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    FName Value;
    
    FNameCurveKey();
};

