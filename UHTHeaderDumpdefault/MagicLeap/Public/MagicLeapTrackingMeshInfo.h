#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapMeshBlockInfo.h"
#include "MagicLeapTrackingMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapTrackingMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTimespan Timestamp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FMagicLeapMeshBlockInfo> BlockData;
    
    FMagicLeapTrackingMeshInfo();
};

