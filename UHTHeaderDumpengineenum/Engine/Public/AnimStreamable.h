#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceBase.h"
#include "EAnimInterpolationType.h"
#include "ERootMotionRootLock.h"
#include "AnimStreamable.generated.h"

class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;

UCLASS(MinimalAPI)
class UAnimStreamable : public UAnimSequenceBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    int32 NumFrames;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    EAnimInterpolationType Interpolation;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName RetargetSource;
    
    UPROPERTY(EditAnywhere)
    UAnimBoneCompressionSettings* BoneCompressionSettings;
    
    UPROPERTY(EditAnywhere)
    UAnimCurveCompressionSettings* CurveCompressionSettings;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bEnableRootMotion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    
    UPROPERTY(EditAnywhere)
    bool bForceRootLock;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bUseNormalizedRootMotionScale;
    
    UAnimStreamable();
};

