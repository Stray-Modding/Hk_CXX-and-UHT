#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
#include "SkeletalMeshSimulationComponent.generated.h"

class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPhysicsAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API USkeletalMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* OverridePhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSimulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImplicitShapeParticlesPerUnitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ImplicitShapeMinNumParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ImplicitShapeMaxNumParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CollisionGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
    USkeletalMeshSimulationComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    
    // Fix for true pure virtual functions not being implemented
};

