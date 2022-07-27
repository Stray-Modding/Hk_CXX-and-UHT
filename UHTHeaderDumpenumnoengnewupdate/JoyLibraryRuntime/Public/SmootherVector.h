#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SmootherVector.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90Percent;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Velocity;
    
    FSmootherVector();
};

