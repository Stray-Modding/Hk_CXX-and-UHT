#pragma once
#include "CoreMinimal.h"
#include "MagicLeapGraphicsClientPerformanceInfo.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapGraphicsClientPerformanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameStartCPUCompAcquireCPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameStartCPUFrameEndGPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameStartCPUFrameStartCPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameDurationCPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameDurationGPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameInternalDurationCPUTimeMs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FrameInternalDurationGPUTimeMs;
    
    FMagicLeapGraphicsClientPerformanceInfo();
};

