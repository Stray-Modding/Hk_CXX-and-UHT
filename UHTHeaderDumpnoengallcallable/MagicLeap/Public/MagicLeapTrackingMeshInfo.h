#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "MagicLeapMeshBlockInfo.h"
#include "MagicLeapTrackingMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapTrackingMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicLeapMeshBlockInfo> BlockData;
    
    FMagicLeapTrackingMeshInfo();
};

