#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpControlPoint.generated.h"

USTRUCT(BlueprintType)
struct FInterpControlPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector PositionControlPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPositionIsRelative;
    
    ENGINE_API FInterpControlPoint();
};

