#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PredictProjectilePathPointData.generated.h"

USTRUCT(BlueprintType)
struct FPredictProjectilePathPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Time;
    
    ENGINE_API FPredictProjectilePathPointData();
};

