#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LiveLinkSourceBufferManagementSettings.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSourceBufferManagementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bValidEngineTimeEnabled;
    
    UPROPERTY(EditAnywhere)
    float ValidEngineTime;
    
    UPROPERTY(EditAnywhere)
    float EngineTimeOffset;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    double EngineTimeClockOffset;
    
    UPROPERTY(EditAnywhere)
    bool bGenerateSubFrame;
    
    UPROPERTY(VisibleAnywhere)
    FFrameRate DetectedFrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bUseTimecodeSmoothLatest;
    
    UPROPERTY(EditAnywhere)
    FFrameRate SourceTimecodeFrameRate;
    
    UPROPERTY(EditAnywhere)
    bool bValidTimecodeFrameEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 ValidTimecodeFrame;
    
    UPROPERTY(EditAnywhere)
    float TimecodeFrameOffset;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    double TimecodeClockOffset;
    
    UPROPERTY(EditAnywhere)
    int32 LatestOffset;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumberOfFrameToBuffered;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bKeepAtLeastOneFrame;
    
    LIVELINKINTERFACE_API FLiveLinkSourceBufferManagementSettings();
};

