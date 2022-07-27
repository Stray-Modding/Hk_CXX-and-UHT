#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ComponentEndOverlapSignatureDelegate.h"
#include "ECanBeCharacterBase.h"
#include "EHasCustomNavigableGeometry.h"
#include "SceneComponent.h"
#include "NavRelevantInterface.h"
#include "ComponentBeginTouchOverSignatureDelegate.h"
#include "ESceneDepthPriorityGroup.h"
#include "ELightmapType.h"
#include "EIndirectLightingCacheQuality.h"
#include "LightingChannels.h"
#include "WalkableSlopeOverride.h"
#include "ERendererStencilMask.h"
#include "CustomPrimitiveData.h"
#include "ComponentOnReleasedSignatureDelegate.h"
#include "ERuntimeVirtualTextureMainPassType.h"
#include "ComponentBeginCursorOverSignatureDelegate.h"
#include "BodyInstance.h"
#include "ComponentHitSignatureDelegate.h"
#include "ComponentBeginOverlapSignatureDelegate.h"
#include "ComponentWakeSignatureDelegate.h"
#include "ComponentSleepSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "ComponentEndCursorOverSignatureDelegate.h"
#include "ECollisionResponse.h"
#include "ComponentOnClickedSignatureDelegate.h"
#include "ComponentOnInputTouchBeginSignatureDelegate.h"
#include "ComponentOnInputTouchEndSignatureDelegate.h"
#include "ComponentEndTouchOverSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDOFMode.h"
#include "ECollisionChannel.h"
#include "ECollisionEnabled.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "HitResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERadialImpulseFalloff -FallbackName=ERadialImpulseFalloff
#include "PrimitiveComponent.generated.h"

class URuntimeVirtualTexture;
class AActor;
class UPrimitiveComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UPhysicalMaterial;
class APawn;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPrimitiveComponent : public USceneComponent, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MinDrawDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LDMaxDrawDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float CachedMaxDrawDistance;
    
    UPROPERTY()
    TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;
    
    UPROPERTY()
    TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightmapType LightmapType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bUseMaxLODAsImposter: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bBatchImpostersAsInstances: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bNeverDistanceCull: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAlwaysCreatePhysicsState: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGenerateOverlapEvents: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bMultiBodyOverlap: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bTraceComplexOnMove: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bReturnMaterialOnMove: 1;
    
    UPROPERTY()
    uint8 bUseViewOwnerDepthPriorityGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAllowCullDistanceVolume: 1;
    
    UPROPERTY()
    uint8 bHasMotionBlurVelocityMeshes: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInReflectionCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInRealTimeSkyCaptures: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInRayTracing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderInMainPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderInDepthPass: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOwnerNoSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bOnlyOwnerSee: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bTreatAsBackgroundForOcclusion: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAsOccluder: 1;
    
    UPROPERTY()
    uint8 bSelectable: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bForceMipStreaming: 1;
    
    UPROPERTY()
    uint8 bHasPerInstanceHitProxies: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastVolumetricTranslucentShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastContactShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bSelfShadowOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastFarShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastInsetShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastCinematicShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastHiddenShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY()
    uint8 bLightAsIfStatic: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bLightAttachmentsAsGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bExcludeFromLightAttachmentGroup: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReceiveMobileCSMShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bSingleSampleShadowFromStationaryLights: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreRadialImpulse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreRadialForce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bApplyImpulseOnDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReplicatePhysicsToAutonomousProxy: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFillCollisionUnderneathForNavmesh: 1;
    
    UPROPERTY()
    uint8 AlwaysLoadOnClient: 1;
    
    UPROPERTY()
    uint8 AlwaysLoadOnServer: 1;
    
    UPROPERTY()
    uint8 bUseEditorCompositing: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bVisibleInSceneCaptureOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bHiddenInSceneCapture: 1;
    
    UPROPERTY()
    TEnumAsByte<EHasCustomNavigableGeometry::Type> bHasCustomNavigableGeometry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FCustomPrimitiveData CustomPrimitiveData;
    
    UPROPERTY(Transient)
    FCustomPrimitiveData CustomPrimitiveDataInternal;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TranslucencySortDistanceOffset;
    
    UPROPERTY()
    int32 VisibilityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int8 VirtualTextureLodBias;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int8 VirtualTextureCullMips;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int8 VirtualTextureMinCoverage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LpvBiasMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BoundsScale;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<AActor*> MoveIgnoreActors;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UPrimitiveComponent*> MoveIgnoreComponents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintAssignable)
    FComponentHitSignature OnComponentHit;
    
    UPROPERTY(BlueprintAssignable)
    FComponentBeginOverlapSignature OnComponentBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FComponentEndOverlapSignature OnComponentEndOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FComponentWakeSignature OnComponentWake;
    
    UPROPERTY(BlueprintAssignable)
    FComponentSleepSignature OnComponentSleep;
    
    UPROPERTY(BlueprintAssignable)
    FComponentBeginCursorOverSignature OnBeginCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FComponentEndCursorOverSignature OnEndCursorOver;
    
    UPROPERTY(BlueprintAssignable)
    FComponentOnClickedSignature OnClicked;
    
    UPROPERTY(BlueprintAssignable)
    FComponentOnReleasedSignature OnReleased;
    
    UPROPERTY(BlueprintAssignable)
    FComponentOnInputTouchBeginSignature OnInputTouchBegin;
    
    UPROPERTY(BlueprintAssignable)
    FComponentOnInputTouchEndSignature OnInputTouchEnd;
    
    UPROPERTY(BlueprintAssignable)
    FComponentBeginTouchOverSignature OnInputTouchEnter;
    
    UPROPERTY(BlueprintAssignable)
    FComponentEndTouchOverSignature OnInputTouchLeave;
    
private:
    UPROPERTY(Export, NonPIEDuplicateTransient)
    UPrimitiveComponent* LODParentPrimitive;
    
public:
    UPrimitiveComponent();
    UFUNCTION(BlueprintPure)
    bool WasRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable)
    void WakeRigidBody(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void WakeAllRigidBodies();
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleInSceneCaptureOnly(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCCD(bool InUseCCD, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysics(bool bSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderInMainPass(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCustomDepth(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReceivesDecals(bool bNewReceivesDecals);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetMassScale(FName BoneName, float InMassScale);
    
    UFUNCTION(BlueprintCallable)
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearDamping(float InDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInSceneCapture(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool bGravityEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencilValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistance(float NewCullDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintMode(TEnumAsByte<EDOFMode::Type> ConstraintMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled::Type> NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadow(bool NewCastShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetCastInsetShadow(bool bInCastInsetShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetCastHiddenShadow(bool NewCastHiddenShadow);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundsScale(float NewBoundsScale);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularDamping(float InDamping);
    
    UFUNCTION(BlueprintCallable)
    void SetAllUseCCD(bool InUseCCD);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMassScale(float InMassScale);
    
    UFUNCTION(BlueprintPure)
    FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void PutRigidBodyToSleep(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintPure)
    bool K2_IsQueryCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool K2_IsPhysicsCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool K2_IsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool K2_BoxOverlapComponent(FVector InBoxCentre, const FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappingComponent(const UPrimitiveComponent* OtherComp) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGravityEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyRigidBodyAwake();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintPure)
    FWalkableSlopeOverride GetWalkableSlopeOverride() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPhysicsLinearVelocity(FName BoneName);
    
    UFUNCTION(BlueprintPure)
    FVector GetPhysicsAngularVelocityInRadians(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPhysicsAngularVelocityInDegrees(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPhysicsAngularVelocity(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents) const;
    
    UFUNCTION(BlueprintPure)
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumMaterials() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInterface* GetMaterial(int32 ElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetMassScale(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    float GetMass() const;
    
    UFUNCTION(BlueprintPure)
    float GetLinearDamping() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetInertiaTensor(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetGenerateOverlapEvents() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const;
    
    UFUNCTION(BlueprintPure)
    FName GetCollisionProfileName() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetCollisionObjectType() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ECollisionEnabled::Type> GetCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenterOfMass(FName BoneName) const;
    
    UFUNCTION(BlueprintPure)
    float GetAngularDamping() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, UMaterialInterface* Parent);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> CopyArrayOfMoveIgnoreActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreComponents();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoveIgnoreActors();
    
    UFUNCTION(BlueprintPure)
    bool CanCharacterStepUp(APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddForceAtLocation(FVector Force, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    
    
    // Fix for true pure virtual functions not being implemented
};

