#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=EClusterConnectionTypeEnum -FallbackName=EClusterConnectionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GeomComponentCacheParameters.h"
#include "OnChaosBreakEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
#include "GeometryCollectionRepData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EGeometryCollectionPhysicsTypeEnum -FallbackName=EGeometryCollectionPhysicsTypeEnum
#include "GeometryCollectionComponent.generated.h"

class UBodySetup;
class UGeometryCollectionComponent;
class AChaosSolverActor;
class UGeometryCollection;
class AFieldSystemActor;
class UChaosPhysicalMaterial;
class UPhysicalMaterial;
class UFieldSystemMetaData;
class UFieldNodeBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionComponent : public UMeshComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent*, FracturedComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent*, FracturedComponent);
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    UGeometryCollection* RestCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TArray<AFieldSystemActor*> InitializationFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableClustering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ClusterGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxClusterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EClusterConnectionTypeEnum ClusterConnectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CollisionSampleFraction;
    
    UPROPERTY()
    float LinearEtherDrag;
    
    UPROPERTY()
    float AngularEtherDrag;
    
    UPROPERTY()
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* PhysicalMaterialOverride;
    
    UPROPERTY()
    FGeomComponentCacheParameters CacheParameters;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosBreakEvent OnChaosBreakEvent;
    
    UPROPERTY(BlueprintReadWrite, Interp, Transient, VisibleAnywhere)
    float DesiredCacheTime;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    bool CachePlayback;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyBreaks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bEnableReplication;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bEnableAbandonAfterLevel;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 ReplicationAbandonClusterLevel;
    
    UPROPERTY(ReplicatedUsing=OnRep_RepData)
    FGeometryCollectionRepData RepData;
    
private:
    UPROPERTY(Transient)
    UBodySetup* DummyBodySetup;
    
public:
    UGeometryCollectionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
protected:
    UFUNCTION()
    void OnRep_RepData(const FGeometryCollectionRepData& OldData);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void NetAbandonCluster(int32 TransformIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKinematicField(float Radius, FVector Position);
    
    
    // Fix for true pure virtual functions not being implemented
};

