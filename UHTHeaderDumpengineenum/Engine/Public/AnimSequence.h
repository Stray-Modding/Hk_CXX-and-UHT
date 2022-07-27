#pragma once
#include "CoreMinimal.h"
#include "TrackToSkeletonMap.h"
#include "AnimSequenceBase.h"
#include "EAdditiveAnimationType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EAdditiveBasePoseType.h"
#include "EAnimInterpolationType.h"
#include "ERootMotionRootLock.h"
#include "AnimSyncMarker.h"
#include "BakedCustomAttributePerBoneData.h"
#include "AnimSequence.generated.h"

class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;
class UAnimSequence;

UCLASS()
class ENGINE_API UAnimSequence : public UAnimSequenceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable)
    int32 NumFrames;
    
    UPROPERTY()
    TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable;
    
public:
    UPROPERTY(EditAnywhere)
    UAnimBoneCompressionSettings* BoneCompressionSettings;
    
    UPROPERTY(EditAnywhere)
    UAnimCurveCompressionSettings* CurveCompressionSettings;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAdditiveBasePoseType> RefPoseType;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* RefPoseSeq;
    
    UPROPERTY(EditAnywhere)
    int32 RefFrameIndex;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName RetargetSource;
    
    UPROPERTY()
    TArray<FTransform> RetargetSourceAssetReferencePose;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    EAnimInterpolationType Interpolation;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bEnableRootMotion;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    
    UPROPERTY(EditAnywhere)
    bool bForceRootLock;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bUseNormalizedRootMotionScale;
    
    UPROPERTY()
    bool bRootMotionSettingsCopiedFromMontage;
    
    UPROPERTY()
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;
    
private:
    UPROPERTY()
    TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData;
    
public:
    UAnimSequence();
};

