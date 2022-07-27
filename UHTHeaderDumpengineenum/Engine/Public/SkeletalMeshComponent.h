#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EKinematicBonesUpdateToPhysics.h"
#include "SkinnedMeshComponent.h"
#include "Interface_CollisionDataProvider.h"
#include "SingleAnimationPlayData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPhysicsTransformUpdateMode.h"
#include "EAnimationMode.h"
#include "ConstraintBrokenSignatureDelegate.h"
#include "OnAnimInitializedDelegate.h"
#include "ETeleportType.h"
#include "PoseSnapshot.h"
#include "ECustomBoneAttributeLookup.h"
#include "SkeletalMeshComponent.generated.h"

class UAnimInstance;
class UBodySetup;
class UClothingSimulationFactory;
class UClothingSimulationInteractor;
class UAnimationAsset;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USkeletalMeshComponent : public USkinnedMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UClass* AnimBlueprintGeneratedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(NonTransactional, Transient)
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(Transient)
    UAnimInstance* PostProcessAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSingleAnimationPlayData AnimationData;
    
    UPROPERTY(Transient)
    FVector RootBoneTranslation;
    
    UPROPERTY()
    FVector LineCheckBoundsScale;
    
private:
    UPROPERTY(Transient)
    TArray<UAnimInstance*> LinkedInstances;
    
    UPROPERTY(Transient)
    TArray<FTransform> CachedBoneSpaceTransforms;
    
    UPROPERTY(Transient)
    TArray<FTransform> CachedComponentSpaceTransforms;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float GlobalAnimRateScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EKinematicBonesUpdateToPhysics::Type> KinematicBonesUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EPhysicsTransformUpdateMode::Type> PhysicsTransformUpdateMode;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EAnimationMode::Type> AnimationMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisablePostProcessBlueprint: 1;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUpdateOverlapsOnAnimationFinalize: 1;
    
    UPROPERTY(Transient)
    uint8 bHasValidBodies: 1;
    
    UPROPERTY(Transient)
    uint8 bBlendPhysics: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bEnablePhysicsOnDedicatedServer: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUpdateJointsFromAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableClothSimulation: 1;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 bDisableRigidBodyAnimNode: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowAnimCurveEvaluation: 1;
    
    UPROPERTY()
    uint8 bDisableAnimCurves: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCollideWithEnvironment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCollideWithAttachedChildren: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLocalSpaceSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bResetAfterTeleport: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bDeferKinematicBoneUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bNoSkeletonUpdate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bPauseAnims: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseRefPoseOnInitAnim: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bEnablePerPolyCollision: 1;
    
    UPROPERTY()
    uint8 bForceRefpose: 1;
    
    UPROPERTY(Transient)
    uint8 bOnlyAllowAutonomousTickPose: 1;
    
    UPROPERTY(Transient)
    uint8 bIsAutonomousTickPose: 1;
    
    UPROPERTY()
    uint8 bOldForceRefPose: 1;
    
    UPROPERTY()
    uint8 bShowPrePhysBones: 1;
    
    UPROPERTY(Transient)
    uint8 bRequiredBonesUpToDate: 1;
    
    UPROPERTY(Transient)
    uint8 bAnimTreeInitialised: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bIncludeComponentLocationIntoBounds: 1;
    
    UPROPERTY()
    uint8 bEnableLineCheckWithBounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPropagateCurvesToSlaves: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bSkipKinematicUpdateWhenInterpolating: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bSkipBoundsUpdateWhenInterpolating: 1;
    
private:
    UPROPERTY(Transient)
    uint8 bNeedsQueuedAnimEventsDispatched: 1;
    
public:
    UPROPERTY(Transient)
    uint16 CachedAnimCurveUidVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ClothBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWaitForParallelClothTask;
    
private:
    UPROPERTY(Transient)
    TArray<FName> DisallowedAnimCurves;
    
public:
    UPROPERTY(Transient)
    UBodySetup* BodySetup;
    
    UPROPERTY(BlueprintAssignable)
    FConstraintBrokenSignature OnConstraintBroken;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UClothingSimulationFactory> ClothingSimulationFactory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportRotationThreshold;
    
    UPROPERTY(Transient)
    uint32 LastPoseTickFrame;
    
    UPROPERTY(Transient)
    UClothingSimulationInteractor* ClothingInteractor;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnAnimInitialized OnAnimInitialized;
    
    USkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisablePostProcessBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void TermBodiesBelow(FName ParentBoneName);
    
    UFUNCTION(BlueprintCallable)
    void SuspendClothingSimulation();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SnapshotPose(UPARAM(Ref) FPoseSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateClothInEditor(const bool NewUpdateState);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateAnimationInEditor(const bool NewUpdateState);
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportRotationThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetTeleportDistanceThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float InPos, bool bFireNotifies);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    void SetClothMaxDistanceScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimClass(UClass* NewClass);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationMode(TEnumAsByte<EAnimationMode::Type> InAnimationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimation(UAnimationAsset* NewAnimToPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedAnimCurvesEvaluation(const TArray<FName>& List, bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void ResumeClothingSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothTeleportMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllowedAnimCurveEvaluation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllBodiesSimulatePhysics();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void Play(bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintCallable)
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintPure)
    bool K2_GetClosestPointOnPhysicsAsset(const FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClothingSimulationSuspended() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBodyGravityEnabled(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    bool HasValidAnimationInstance() const;
    
    UFUNCTION(BlueprintPure)
    float GetTeleportRotationThreshold() const;
    
    UFUNCTION(BlueprintPure)
    float GetTeleportDistanceThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStringAttribute_Ref(const FName& BoneName, const FName& AttributeName, UPARAM(Ref) FString& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintCallable)
    bool GetStringAttribute(const FName& BoneName, const FName& AttributeName, const FString& DefaultValue, FString& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintPure)
    FVector GetSkeletalCenterOfMass() const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetPostProcessInstance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPosition() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetMorphTarget(FName MorphTargetName) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintPure)
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIntegerAttribute_Ref(const FName& BoneName, const FName& AttributeName, UPARAM(Ref) int32& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintCallable)
    bool GetIntegerAttribute(const FName& BoneName, const FName& AttributeName, int32 DefaultValue, int32& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintCallable)
    bool GetFloatAttribute_Ref(const FName& BoneName, const FName& AttributeName, UPARAM(Ref) float& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintCallable)
    bool GetFloatAttribute(const FName& BoneName, const FName& AttributeName, float DefaultValue, float& OutValue, ECustomBoneAttributeLookup LookupType);
    
    UFUNCTION(BlueprintPure)
    bool GetDisablePostProcessBlueprint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableAnimCurves() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    
    UFUNCTION(BlueprintPure)
    float GetClothMaxDistanceScale() const;
    
    UFUNCTION(BlueprintPure)
    UClothingSimulationInteractor* GetClothingSimulationInteractor() const;
    
    UFUNCTION(BlueprintPure)
    float GetBoneMass(FName BoneName, bool bScaleMass) const;
    
    UFUNCTION(BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION()
    UClass* GetAnimClass();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAnimationMode::Type> GetAnimationMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowRigidBodyAnimNode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAllowedAnimCurveEvaluate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceClothNextUpdateTeleportAndReset();
    
    UFUNCTION(BlueprintCallable)
    void ForceClothNextUpdateTeleport();
    
    UFUNCTION(BlueprintCallable)
    FName FindConstraintBoneName(int32 ConstraintIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearMorphTargets();
    
    UFUNCTION(BlueprintCallable)
    void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void BindClothToMasterPoseComponent();
    
    UFUNCTION(BlueprintCallable)
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void AddForceToAllBodiesBelow(FVector Force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
    
    
    // Fix for true pure virtual functions not being implemented
};

