#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "MatineeAnimInterface.h"
#include "SkeletalMeshActor.generated.h"

class UPhysicsAsset;
class USkeletalMeshComponent;
class USkeletalMesh;
class UMaterialInterface;

UCLASS()
class ENGINE_API ASkeletalMeshActor : public AActor, public IMatineeAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bShouldDoAnimNotifies: 1;
    
    UPROPERTY()
    uint8 bWakeOnLevelStart: 1;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedMesh)
    USkeletalMesh* ReplicatedMesh;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedPhysAsset)
    UPhysicsAsset* ReplicatedPhysAsset;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedMaterial0)
    UMaterialInterface* ReplicatedMaterial0;
    
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedMaterial1)
    UMaterialInterface* ReplicatedMaterial1;
    
    ASkeletalMeshActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_ReplicatedPhysAsset();
    
    UFUNCTION()
    void OnRep_ReplicatedMesh();
    
    UFUNCTION()
    void OnRep_ReplicatedMaterial1();
    
    UFUNCTION()
    void OnRep_ReplicatedMaterial0();
    
    
    // Fix for true pure virtual functions not being implemented
};

