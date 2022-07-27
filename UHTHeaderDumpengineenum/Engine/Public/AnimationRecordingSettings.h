#pragma once
#include "CoreMinimal.h"
#include "ERichCurveInterpMode.h"
#include "ERichCurveTangentMode.h"
#include "AnimationRecordingSettings.generated.h"

USTRUCT()
struct ENGINE_API FAnimationRecordingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRecordInWorldSpace;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveRootAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bAutoSaveAsset;
    
    UPROPERTY(EditAnywhere)
    float SampleRate;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY(EditAnywhere)
    bool bRecordTransforms;
    
    UPROPERTY(EditAnywhere)
    bool bRecordCurves;
    
    FAnimationRecordingSettings();
};

