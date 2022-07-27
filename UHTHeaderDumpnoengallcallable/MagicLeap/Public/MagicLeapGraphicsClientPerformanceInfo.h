#pragma once
#include "CoreMinimal.h"
#include "MagicLeapGraphicsClientPerformanceInfo.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapGraphicsClientPerformanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameStartCPUCompAcquireCPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameStartCPUFrameEndGPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameStartCPUFrameStartCPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameDurationCPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameDurationGPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameInternalDurationCPUTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameInternalDurationGPUTimeMs;
    
    FMagicLeapGraphicsClientPerformanceInfo();
};

