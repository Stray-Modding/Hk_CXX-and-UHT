#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraCutInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraCutInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    float Timestamp;
    
    ENGINE_API FCameraCutInfo();
};

