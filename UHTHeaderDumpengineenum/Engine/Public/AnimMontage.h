#pragma once
#include "CoreMinimal.h"
#include "AnimCompositeBase.h"
#include "BranchingPointMarker.h"
#include "AlphaBlend.h"
#include "MarkerSyncData.h"
#include "CompositeSection.h"
#include "TimeStretchCurve.h"
#include "SlotAnimationTrack.h"
#include "BranchingPoint.h"
#include "ERootMotionRootLock.h"
#include "AnimMontage.generated.h"

UCLASS(MinimalAPI)
class UAnimMontage : public UAnimCompositeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAlphaBlend BlendIn;
    
    UPROPERTY()
    float blendInTime;
    
    UPROPERTY(EditAnywhere)
    FAlphaBlend BlendOut;
    
    UPROPERTY()
    float blendOutTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTriggerTime;
    
    UPROPERTY(EditAnywhere)
    FName SyncGroup;
    
    UPROPERTY(EditAnywhere)
    int32 SyncSlotIndex;
    
    UPROPERTY()
    FMarkerSyncData MarkerData;
    
    UPROPERTY()
    TArray<FCompositeSection> CompositeSections;
    
    UPROPERTY()
    TArray<FSlotAnimationTrack> SlotAnimTracks;
    
    UPROPERTY()
    TArray<FBranchingPoint> BranchingPoints;
    
    UPROPERTY()
    bool bEnableRootMotionTranslation;
    
    UPROPERTY()
    bool bEnableRootMotionRotation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableAutoBlendOut;
    
    UPROPERTY()
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    
private:
    UPROPERTY()
    TArray<FBranchingPointMarker> BranchingPointMarkers;
    
public:
    UPROPERTY()
    TArray<int32> BranchingPointStateNotifyIndices;
    
    UPROPERTY(EditAnywhere)
    FTimeStretchCurve TimeStretchCurve;
    
    UPROPERTY(EditAnywhere)
    FName TimeStretchCurveName;
    
    UAnimMontage();
    UFUNCTION(BlueprintPure)
    float GetDefaultBlendOutTime() const;
    
};

