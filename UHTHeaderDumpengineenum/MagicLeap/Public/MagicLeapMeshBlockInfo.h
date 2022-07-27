#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "EMagicLeapMeshState.h"
#include "MagicLeapMeshBlockInfo.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapMeshBlockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid BlockID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector BlockPosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator BlockOrientation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector BlockDimensions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTimespan Timestamp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EMagicLeapMeshState BlockState;
    
    FMagicLeapMeshBlockInfo();
};

