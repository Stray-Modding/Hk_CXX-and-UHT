#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "EXRVisualType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "ETrackingStatus.h"
#include "XRMotionControllerData.generated.h"

USTRUCT(BlueprintType)
struct HEADMOUNTEDDISPLAY_API FXRMotionControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bValid;
    
    UPROPERTY(BlueprintReadOnly)
    FName DeviceName;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ApplicationInstanceID;
    
    UPROPERTY(BlueprintReadOnly)
    EXRVisualType DeviceVisualType;
    
    UPROPERTY(BlueprintReadOnly)
    EControllerHand HandIndex;
    
    UPROPERTY(BlueprintReadOnly)
    ETrackingStatus TrackingStatus;
    
    UPROPERTY(BlueprintReadOnly)
    FVector GripPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat GripRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AimPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat AimRotation;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> HandKeyPositions;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FQuat> HandKeyRotations;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> HandKeyRadii;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsGrasped;
    
    FXRMotionControllerData();
};

