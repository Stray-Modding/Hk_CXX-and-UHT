#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RotationLimit.generated.h"

USTRUCT(BlueprintType)
struct FRotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimitMin;
    
    UPROPERTY(EditAnywhere)
    FVector LimitMax;
    
    ANIMGRAPHRUNTIME_API FRotationLimit();
};

