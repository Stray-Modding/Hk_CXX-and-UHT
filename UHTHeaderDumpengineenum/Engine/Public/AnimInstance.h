#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimNotifyQueue.h"
#include "ERootMotionMode.h"
#include "OnMontageBlendingOutStartedMCDelegateDelegate.h"
#include "OnMontageEndedMCDelegateDelegate.h"
#include "OnMontageStartedMCDelegateDelegate.h"
#include "OnAllMontageInstancesEndedMCDelegateDelegate.h"
#include "AnimNotifyEvent.h"
#include "ETeleportType.h"
#include "PoseSnapshot.h"
#include "EMontagePlayReturnType.h"
#include "MarkerSyncAnimPosition.h"
#include "EAnimCurveType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimInstance.generated.h"

class USkeleton;
class UAnimMontage;
class UAnimInstance;
class APawn;
class UAnimSequenceBase;
class USkeletalMeshComponent;
class AActor;

UCLASS(Blueprintable, Transient, Within=SkeletalMeshComponent)
class ENGINE_API UAnimInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USkeleton* CurrentSkeleton;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ERootMotionMode::Type> RootMotionMode;
    
    UPROPERTY()
    uint8 bUseMultiThreadedAnimationUpdate: 1;
    
    UPROPERTY()
    uint8 bUsingCopyPoseFromMesh: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bReceiveNotifiesFromLinkedInstances: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bPropagateNotifiesToLinkedInstances: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bQueueMontageEvents: 1;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnMontageBlendingOutStartedMCDelegate OnMontageBlendingOut;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageStartedMCDelegate OnMontageStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnMontageEndedMCDelegate OnMontageEnded;
    
    UPROPERTY(BlueprintAssignable)
    FOnAllMontageInstancesEndedMCDelegate OnAllMontageInstancesEnded;
    
    UPROPERTY(Transient)
    FAnimNotifyQueue NotifyQueue;
    
    UPROPERTY(Transient)
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;
    
    UAnimInstance();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintPure)
    APawn* TryGetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
    
    UFUNCTION(BlueprintCallable)
    void SnapshotPose(UPARAM(Ref) FPoseSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionMode(TEnumAsByte<ERootMotionMode::Type> Value);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphTarget(FName MorphTargetName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SavePoseSnapshot(FName SnapshotName);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamics(ETeleportType InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float blendInTime, float blendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float blendInTime, float blendOutTime, float InPlayRate, int32 LoopCount);
    
    UFUNCTION(BlueprintCallable)
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Stop(float InBlendOutTime, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetPosition(const UAnimMontage* Montage, float newPosition);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetPlayRate(const UAnimMontage* Montage, float NewPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Resume(const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable)
    void Montage_Pause(const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void Montage_JumpToSection(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintPure)
    bool Montage_IsPlaying(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    bool Montage_IsActive(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    float Montage_GetPosition(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    float Montage_GetPlayRate(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    bool Montage_GetIsStopped(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    FName Montage_GetCurrentSection(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintPure)
    float Montage_GetBlendTime(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintPure)
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingSlotAnimation(const UAnimSequenceBase* Asset, FName SlotNodeName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyMontagePlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime) const;
    
    UFUNCTION(BlueprintPure)
    FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName) const;
    
    UFUNCTION(BlueprintPure)
    float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetReceiveNotifiesFromLinkedInstances() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPropagateNotifiesToLinkedInstances() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintPure)
    void GetLinkedAnimLayerInstancesByGroup(FName InGroup, TArray<UAnimInstance*>& OutLinkedInstances) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByGroupAndClass(FName InGroup, TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintPure)
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;
    
    UFUNCTION(BlueprintPure)
    float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceMachineWeight(int32 MachineIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintPure)
    float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);
    
    UFUNCTION(BlueprintPure)
    float GetCurveValue(FName CurveName) const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentStateName(int32 MachineIndex);
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetCurrentActiveMontage() const;
    
    UFUNCTION(BlueprintPure)
    void GetAllCurveNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMorphTargets();
    
    UFUNCTION(BlueprintPure)
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintUpdateAnimation(float DeltaTimeX);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintPostEvaluateAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintLinkedAnimationLayersInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintInitializeAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintBeginPlay();
    
};

