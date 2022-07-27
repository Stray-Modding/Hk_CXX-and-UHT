#pragma once
#include "CoreMinimal.h"
#include "ERootMotionAccumulateMode.h"
#include "RootMotionSourceStatus.h"
#include "RootMotionMovementParams.h"
#include "RootMotionSourceSettings.h"
#include "RootMotionFinishVelocitySettings.h"
#include "RootMotionSource.generated.h"

USTRUCT()
struct ENGINE_API FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 Priority;
    
    UPROPERTY()
    uint16 LocalID;
    
    UPROPERTY()
    ERootMotionAccumulateMode AccumulateMode;
    
    UPROPERTY()
    FName InstanceName;
    
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    float CurrentTime;
    
    UPROPERTY()
    float PreviousTime;
    
    UPROPERTY()
    float Duration;
    
    UPROPERTY()
    FRootMotionSourceStatus status;
    
    UPROPERTY()
    FRootMotionSourceSettings Settings;
    
    UPROPERTY()
    bool bInLocalSpace;
    
    UPROPERTY()
    FRootMotionMovementParams RootMotionParams;
    
    UPROPERTY()
    FRootMotionFinishVelocitySettings FinishVelocityParams;
    
    FRootMotionSource();
};

