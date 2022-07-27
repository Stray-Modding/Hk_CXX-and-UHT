#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActorComponent.h"
#include "PhysicsVolumeChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ERelativeTransformSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EComponentMobility.h"
#include "EDetailMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HitResult.h"
#include "EDetachmentRule.h"
#include "EAttachmentRule.h"
#include "EAttachLocation.h"
#include "SceneComponent.generated.h"

class APhysicsVolume;
class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USceneComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<APhysicsVolume> PhysicsVolume;
    
    UPROPERTY(Export, ReplicatedUsing=OnRep_AttachParent)
    USceneComponent* AttachParent;
    
    UPROPERTY(ReplicatedUsing=OnRep_AttachSocketName)
    FName AttachSocketName;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_AttachChildren)
    TArray<USceneComponent*> AttachChildren;
    
    UPROPERTY(Export, Transient)
    TArray<USceneComponent*> ClientAttachedChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    FVector RelativeScale3D;
    
public:
    UPROPERTY()
    FVector ComponentVelocity;
    
private:
    UPROPERTY(Transient)
    uint8 bComponentToWorldUpdated: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    uint8 bAbsoluteLocation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    uint8 bAbsoluteRotation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Transform, meta=(AllowPrivateAccess=true))
    uint8 bAbsoluteScale: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Visibility, meta=(AllowPrivateAccess=true))
    uint8 bVisible: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bShouldBeAttached: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bShouldSnapLocationWhenAttached: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bShouldSnapRotationWhenAttached: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldUpdatePhysicsVolume: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    uint8 bHiddenInGame: 1;
    
    UPROPERTY()
    uint8 bBoundsChangeTriggersStreamingDataRebuild: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseAttachParentBound: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDetailMode> DetailMode;
    
    UPROPERTY(BlueprintAssignable)
    FPhysicsVolumeChanged PhysicsVolumeChangedDelegate;
    
    USceneComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleVisibility(bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    bool SnapTo(USceneComponent* InParent, FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldScale3D(FVector NewScale);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeScale3D(FVector NewScale3D);
    
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> NewMobility);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    
    UFUNCTION(BlueprintCallable)
    void ResetRelativeTransform();
    
private:
    UFUNCTION()
    void OnRep_Visibility(bool OldValue);
    
    UFUNCTION()
    void OnRep_Transform();
    
    UFUNCTION()
    void OnRep_AttachSocketName();
    
    UFUNCTION()
    void OnRep_AttachParent();
    
    UFUNCTION()
    void OnRep_AttachChildren();
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_SetWorldTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetRelativeTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintPure)
    FTransform K2_GetComponentToWorld() const;
    
    UFUNCTION(BlueprintPure)
    FVector K2_GetComponentScale() const;
    
    UFUNCTION(BlueprintPure)
    FRotator K2_GetComponentRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector K2_GetComponentLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
    
    UFUNCTION(BlueprintCallable)
    bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachType, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddLocalTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSimulatingPhysics(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnySimulatingPhysics() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetUpVector() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetSocketTransform(FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetSocketRotation(FName InSocketName) const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetSocketQuaternion(FName InSocketName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSocketLocation(FName InSocketName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldUpdatePhysicsVolume() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightVector() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetRelativeTransform() const;
    
    UFUNCTION(BlueprintPure)
    APhysicsVolume* GetPhysicsVolume() const;
    
    UFUNCTION(BlueprintPure)
    void GetParentComponents(TArray<USceneComponent*>& Parents) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumChildrenComponents() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetComponentVelocity() const;
    
    UFUNCTION(BlueprintPure)
    void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children) const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetChildComponent(int32 ChildIndex) const;
    
    UFUNCTION(BlueprintPure)
    FName GetAttachSocketName() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetAttachParent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetAllSocketNames() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesSocketExist(FName InSocketName) const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
    
};

