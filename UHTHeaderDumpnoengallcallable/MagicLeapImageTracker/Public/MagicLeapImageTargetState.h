#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapImageTargetStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MagicLeapImageTargetState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPIMAGETRACKER_API FMagicLeapImageTargetState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapImageTargetStatus TrackingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    FMagicLeapImageTargetState();
};

