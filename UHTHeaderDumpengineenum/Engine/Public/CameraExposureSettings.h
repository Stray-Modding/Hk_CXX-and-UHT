#pragma once
#include "CoreMinimal.h"
#include "EAutoExposureMethod.h"
#include "CameraExposureSettings.generated.h"

class UCurveFloat;
class UTexture;

USTRUCT(BlueprintType)
struct FCameraExposureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAutoExposureMethod> Method;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float LowPercent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HighPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MinBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SpeedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SpeedDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Bias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BiasCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* MeterMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float HistogramLogMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp)
    float CalibrationConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ApplyPhysicalCameraExposure: 1;
    
    ENGINE_API FCameraExposureSettings();
};

