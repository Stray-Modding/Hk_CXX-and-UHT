#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorBeginTouchOverSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActorTickFunction.h"
#include "EActorUpdateOverlapsMethod.h"
#include "ActorOnClickedSignatureDelegate.h"
#include "ENetRole.h"
#include "RepMovement.h"
#include "ActorOnInputTouchBeginSignatureDelegate.h"
#include "EAutoReceiveInput.h"
#include "RepAttachment.h"
#include "ActorBeginOverlapSignatureDelegate.h"
#include "ENetDormancy.h"
#include "ESpawnActorCollisionHandlingMethod.h"
#include "EDetachmentRule.h"
#include "EAttachmentRule.h"
#include "TakeAnyDamageSignatureDelegate.h"
#include "ActorDestroyedSignatureDelegate.h"
#include "TakePointDamageSignatureDelegate.h"
#include "TakeRadialDamageSignatureDelegate.h"
#include "ActorEndOverlapSignatureDelegate.h"
#include "ActorBeginCursorOverSignatureDelegate.h"
#include "ActorEndCursorOverSignatureDelegate.h"
#include "ActorOnReleasedSignatureDelegate.h"
#include "ActorOnInputTouchEndSignatureDelegate.h"
#include "ActorEndTouchOverSignatureDelegate.h"
#include "ETickingGroup.h"
#include "ActorHitSignatureDelegate.h"
#include "ActorEndPlaySignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "HitResult.h"
#include "EEndPlayReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=ETouchIndex -FallbackName=ETouchIndex
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EAttachLocation.h"
#include "Actor.generated.h"

class AActor;
class UInputComponent;
class APawn;
class USceneComponent;
class AMatineeActor;
class UChildActorComponent;
class UActorComponent;
class UDamageType;
class UMaterialInterface;
class AController;
class UPrimitiveComponent;
class APlayerController;
class UMaterialInstanceDynamic;
class UInterface;
class IInterface;

UCLASS(Blueprintable)
class ENGINE_API AActor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FActorTickFunction PrimaryActorTick;
    
    UPROPERTY()
    uint8 bNetTemporary: 1;
    
    UPROPERTY()
    uint8 bNetStartup: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOnlyRelevantToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bAlwaysRelevant: 1;
    
private:
    UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_ReplicateMovement)
    uint8 bReplicateMovement: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHidden: 1;
    
    UPROPERTY(Replicated)
    uint8 bTearOff: 1;
    
    UPROPERTY()
    uint8 bForceNetAddressable: 1;
    
public:
    UPROPERTY(Transient)
    uint8 bExchangedRoles: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNetLoadOnClient: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bNetUseOwnerRelevancy: 1;
    
    UPROPERTY()
    uint8 bRelevantForNetworkReplays: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bRelevantForLevelBounds: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bReplayRewindable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAllowTickBeforeBeginPlay: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroyWhenFinished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDamaged: 1;
    
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 bBlockInput: 1;
    
    UPROPERTY()
    uint8 bCollideWhenPlacing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bFindCameraComponentWhenViewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateOverlapEventsDuringLevelStreaming: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bIgnoresOriginShifting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bEnableAutoLODGeneration: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bIsEditorOnlyActor: 1;
    
    UPROPERTY()
    uint8 bActorSeamlessTraveled: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bReplicates: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCanBeInCluster: 1;
    
    UPROPERTY()
    uint8 bAllowReceiveTickEventOnDedicatedServer: 1;
    
private:
    UPROPERTY()
    uint8 bActorEnableCollision: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint8 bActorIsBeingDestroyed: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming;
    
private:
    UPROPERTY(Config, VisibleAnywhere)
    EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming;
    
    UPROPERTY(Replicated, Transient)
    TEnumAsByte<ENetRole> RemoteRole;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly, ReplicatedUsing=OnRep_ReplicatedMovement)
    FRepMovement ReplicatedMovement;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialLifeSpan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    float CustomTimeDilation;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttachmentReplication)
    FRepAttachment AttachmentReplication;
    
    UPROPERTY(ReplicatedUsing=OnRep_Owner)
    AActor* Owner;
    
protected:
    UPROPERTY()
    FName NetDriverName;
    
private:
    UPROPERTY(Replicated)
    TEnumAsByte<ENetRole> Role;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ENetDormancy> NetDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAutoReceiveInput::Type> AutoReceiveInput;
    
    UPROPERTY(EditAnywhere)
    int32 InputPriority;
    
    UPROPERTY(DuplicateTransient, Export)
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NetCullDistanceSquared;
    
    UPROPERTY(Transient)
    int32 NetTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float NetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MinNetUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float NetPriority;
    
private:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Instigator, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
public:
    UPROPERTY(Transient)
    TArray<AActor*> Children;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* RootComponent;
    
    UPROPERTY(Transient)
    TArray<AMatineeActor*> ControllingMatineeActors;
    
public:
    UPROPERTY()
    TArray<FName> Layers;
    
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UChildActorComponent> ParentComponent;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintAssignable)
    FTakeAnyDamageSignature OnTakeAnyDamage;
    
    UPROPERTY(BlueprintAssignable)
    FTakePointDamageSignature OnTakePointDamage;
    
    UPROPERTY(BlueprintAssignable)
    FTakeRadialDamageSignature OnTakeRadialDamage;
    
    UPROPERTY(BlueprintAssignable)
    FActorBeginOverlapSignature OnActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FActorEndOverlapSignature OnActorEndOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FActorBeginCursorOverSignature OnBeginCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FActorEndCursorOverSignature OnEndCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FActorOnClickedSignature OnClicked;
    
    UPROPERTY(BlueprintAssignable)
    FActorOnReleasedSignature OnReleased;
    
    UPROPERTY(BlueprintAssignable)
    FActorOnInputTouchBeginSignature OnInputTouchBegin;
    
    UPROPERTY(BlueprintAssignable)
    FActorOnInputTouchEndSignature OnInputTouchEnd;
    
    UPROPERTY(BlueprintAssignable)
    FActorBeginTouchOverSignature OnInputTouchEnter;
    
    UPROPERTY(BlueprintAssignable)
    FActorEndTouchOverSignature OnInputTouchLeave;
    
    UPROPERTY(BlueprintAssignable)
    FActorHitSignature OnActorHit;
    
    UPROPERTY(BlueprintAssignable)
    FActorDestroyedSignature OnDestroyed;
    
    UPROPERTY(BlueprintAssignable)
    FActorEndPlaySignature OnEndPlay;
    
private:
    UPROPERTY(Export)
    TArray<UActorComponent*> InstanceComponents;
    
public:
    UPROPERTY(Export, NonTransactional, TextExportTransient)
    TArray<UActorComponent*> BlueprintCreatedComponents;
    
    AActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WasRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UserConstructionScript();
    
    UFUNCTION(BlueprintCallable)
    void TearOff();
    
    UFUNCTION(BlueprintCallable)
    void SnapRootComponentTo(AActor* InParentActor, FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReplicates(bool bInReplicates);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicateMovement(bool bInReplicateMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(AActor* NewOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeSpan(float InLifespan);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroyWhenFinished(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTickInterval(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetActorTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetActorScale3D(FVector NewScale3D);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRelativeScale3D(FVector NewRelativeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetActorHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveRadialDamage(float DamageReceived, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDestroyed();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginPlay();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnReleased(FKey ButtonReleased);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchLeave(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchEnter(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchEnd(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnInputTouchBegin(const TEnumAsByte<ETouchIndex::Type> FingerIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorOnClicked(FKey ButtonPressed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorEndOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorEndCursorOver();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorBeginCursorOver();
    
    UFUNCTION(BlueprintCallable)
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    
    UFUNCTION()
    void OnRep_ReplicateMovement();
    
    UFUNCTION()
    void OnRep_ReplicatedMovement();
    
protected:
    UFUNCTION()
    void OnRep_Owner();
    
public:
    UFUNCTION()
    void OnRep_Instigator();
    
    UFUNCTION()
    void OnRep_AttachmentReplication();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* MakeMIDForMaterial(UMaterialInterface* Parent);
    
    UFUNCTION(BlueprintCallable)
    bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEndViewTarget(APlayerController* PC);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBecomeViewTarget(APlayerController* PC);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* K2_GetRootComponent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> K2_GetComponentsByClass(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintPure)
    FRotator K2_GetActorRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector K2_GetActorLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void K2_DestroyActor();
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation::Type> AttachLocationType, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsChildActor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorTickEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorBeingDestroyed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintPure)
    float GetVerticalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTickableWhenPaused();
    
    UFUNCTION(BlueprintPure)
    float GetSquaredHorizontalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    float GetSquaredDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ENetRole> GetRemoteRole() const;
    
    UFUNCTION(BlueprintPure)
    UChildActorComponent* GetParentComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetParentActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents) const;
    
    UFUNCTION(BlueprintPure)
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ENetRole> GetLocalRole() const;
    
    UFUNCTION(BlueprintPure)
    float GetLifeSpan() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetInstigatorController() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetInputVectorAxisValue(const FKey InputAxisKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputAxisValue(const FName InputAxisName) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputAxisKeyValue(const FKey InputAxisKey) const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalDotProductTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    float GetHorizontalDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    float GetGameTimeSinceCreation() const;
    
    UFUNCTION(BlueprintPure)
    float GetDotProductTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceTo(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> GetComponentsByTag(TSubclassOf<UActorComponent> ComponentClass, FName Tag) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UActorComponent*> GetComponentsByInterface(TSubclassOf<UInterface> Interface) const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const;
    
    UFUNCTION(BlueprintPure)
    FName GetAttachParentSocketName() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachParentActor() const;
    
    UFUNCTION(BlueprintPure)
    void GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorUpVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetActorTimeDilation() const;
    
    UFUNCTION(BlueprintPure)
    float GetActorTickInterval() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorScale3D() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorRightVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorRelativeScale3D() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetActorForwardVector() const;
    
    UFUNCTION(BlueprintPure)
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetActorEnableCollision() const;
    
    UFUNCTION(BlueprintPure)
    void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceNetUpdate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FlushNetDormancy();
    
    UFUNCTION(BlueprintCallable)
    void FinishAddComponent(UActorComponent* Component, bool bManualAttachment, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void EnableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DisableInput(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddComponentByClass(TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish);
    
    UFUNCTION(BlueprintCallable)
    UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, const UObject* ComponentTemplateContext, bool bDeferredFinish);
    
    UFUNCTION(BlueprintPure)
    bool ActorHasTag(FName Tag) const;
    
};

