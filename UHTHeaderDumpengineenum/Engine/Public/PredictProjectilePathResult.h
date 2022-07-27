#pragma once
#include "CoreMinimal.h"
#include "PredictProjectilePathPointData.h"
#include "HitResult.h"
#include "PredictProjectilePathResult.generated.h"

USTRUCT(BlueprintType)
struct FPredictProjectilePathResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FPredictProjectilePathPointData> PathData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FPredictProjectilePathPointData LastTraceDestination;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FHitResult HitResult;
    
    ENGINE_API FPredictProjectilePathResult();
};

