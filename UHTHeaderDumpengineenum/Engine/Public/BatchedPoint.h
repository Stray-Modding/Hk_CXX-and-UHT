#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BatchedPoint.generated.h"

USTRUCT()
struct FBatchedPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float PointSize;
    
    UPROPERTY()
    float RemainingLifeTime;
    
    UPROPERTY()
    uint8 DepthPriority;
    
    ENGINE_API FBatchedPoint();
};

