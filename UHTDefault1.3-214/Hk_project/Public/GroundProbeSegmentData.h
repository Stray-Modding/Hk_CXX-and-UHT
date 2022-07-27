#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GroundProbeSegmentData.generated.h"

USTRUCT(BlueprintType)
struct HK_PROJECT_API FGroundProbeSegmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Type;
    
    FGroundProbeSegmentData();
};

