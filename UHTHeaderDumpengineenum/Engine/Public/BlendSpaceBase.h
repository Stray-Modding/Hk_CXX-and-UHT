#pragma once
#include "CoreMinimal.h"
#include "PerBoneInterpolation.h"
#include "AnimationAsset.h"
#include "InterpolationParameter.h"
#include "EditorElement.h"
#include "ENotifyTriggerMode.h"
#include "BlendSample.h"
#include "BlendParameter.h"
#include "BlendSpaceBase.generated.h"

UCLASS(Abstract, MinimalAPI)
class UBlendSpaceBase : public UAnimationAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bRotationBlendInMeshSpace;
    
    UPROPERTY(Transient)
    float AnimLength;
    
    UPROPERTY(EditAnywhere)
    FInterpolationParameter InterpolationParam[3];
    
    UPROPERTY(EditAnywhere)
    float TargetWeightInterpolationSpeedPerSec;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FPerBoneInterpolation> PerBoneBlend;
    
    UPROPERTY()
    int32 SampleIndexWithMarkers;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlendSample> SampleData;
    
    UPROPERTY()
    TArray<FEditorElement> GridSamples;
    
    UPROPERTY(EditAnywhere)
    FBlendParameter BlendParameters[3];
    
public:
    UBlendSpaceBase();
};

