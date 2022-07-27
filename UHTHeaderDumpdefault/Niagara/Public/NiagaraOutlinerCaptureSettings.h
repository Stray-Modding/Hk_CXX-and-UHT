#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerCaptureSettings.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraOutlinerCaptureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTriggerCapture;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 CaptureDelayFrames;
    
    UPROPERTY(Config, EditAnywhere)
    bool bGatherPerfData;
    
    FNiagaraOutlinerCaptureSettings();
};

