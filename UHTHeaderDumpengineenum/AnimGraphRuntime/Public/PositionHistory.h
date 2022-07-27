#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PositionHistory.generated.h"

USTRUCT(BlueprintType)
struct FPositionHistory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Positions;
    
    UPROPERTY(EditAnywhere)
    float Range;
    
    ANIMGRAPHRUNTIME_API FPositionHistory();
};

