#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosNotifyHandlerInterface -FallbackName=ChaosNotifyHandlerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EObjectStateTypeEnum -FallbackName=EObjectStateTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EInitialVelocityTypeEnum -FallbackName=EInitialVelocityTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=OnChaosPhysicsCollision__DelegateSignature -FallbackName=OnChaosPhysicsCollisionDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosSolverEngine -ObjectName=ChaosPhysicsCollisionInfo -FallbackName=ChaosPhysicsCollisionInfo
#include "StaticMeshSimulationComponent.generated.h"

class UChaosPhysicalMaterial;
class AChaosSolverActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UStaticMeshSimulationComponent : public UActorComponent, public IChaosNotifyHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Simulating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNotifyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EObjectStateTypeEnum ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitialVelocityTypeEnum InitialVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InitialAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UChaosPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    AChaosSolverActor* ChaosSolverActor;
    
    UPROPERTY(BlueprintAssignable)
    FOnChaosPhysicsCollision OnChaosPhysicsCollision;
    
private:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> SimulatedComponents;
    
public:
    UStaticMeshSimulationComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    
    UFUNCTION(BlueprintCallable)
    void ForceRecreatePhysicsState();
    
    
    // Fix for true pure virtual functions not being implemented
};

