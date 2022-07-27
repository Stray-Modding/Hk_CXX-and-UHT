#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ETrackingStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "XRHMDData.generated.h"

USTRUCT(BlueprintType)
struct HEADMOUNTEDDISPLAY_API FXRHMDData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bValid;
    
    UPROPERTY(BlueprintReadOnly)
    FName DeviceName;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ApplicationInstanceID;
    
    UPROPERTY(BlueprintReadOnly)
    ETrackingStatus TrackingStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Position;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Rotation;
    
    FXRHMDData();
};

