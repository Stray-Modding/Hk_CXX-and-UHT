#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BatchedLine.generated.h"

USTRUCT()
struct FBatchedLine {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Start;
    
    UPROPERTY()
    FVector End;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Thickness;
    
    UPROPERTY()
    float RemainingLifeTime;
    
    UPROPERTY()
    uint8 DepthPriority;
    
    ENGINE_API FBatchedLine();
};

