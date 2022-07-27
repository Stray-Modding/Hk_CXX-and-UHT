#pragma once
#include "CoreMinimal.h"
#include "InterpLookupPoint.generated.h"

USTRUCT(BlueprintType)
struct FInterpLookupPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName GroupName;
    
    UPROPERTY()
    float Time;
    
    ENGINE_API FInterpLookupPoint();
};

