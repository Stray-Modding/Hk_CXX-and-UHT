#pragma once
#include "CoreMinimal.h"
#include "ECameraFocusMethod.h"
#include "CameraTrackingFocusSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "CameraFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ManualFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraTrackingFocusSettings TrackingFocusSettings;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 bDrawDebugFocusPlane: 1;
    
    UPROPERTY(EditAnywhere)
    FColor DebugFocusPlaneColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSmoothFocusChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusSmoothingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FocusOffset;
    
    CINEMATICCAMERA_API FCameraFocusSettings();
};

