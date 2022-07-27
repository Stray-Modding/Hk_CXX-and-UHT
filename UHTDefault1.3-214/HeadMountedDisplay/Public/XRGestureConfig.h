#pragma once
#include "CoreMinimal.h"
#include "ESpatialInputGestureAxis.h"
#include "XRGestureConfig.generated.h"

USTRUCT(BlueprintType)
struct HEADMOUNTEDDISPLAY_API FXRGestureConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpatialInputGestureAxis AxisGesture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNavigationAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNavigationAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNavigationAxisZ;
    
    FXRGestureConfig();
};

