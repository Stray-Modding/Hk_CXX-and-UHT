#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MTDResult.generated.h"

USTRUCT()
struct ENGINE_API FMTDResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    float Distance;
    
    FMTDResult();
};

