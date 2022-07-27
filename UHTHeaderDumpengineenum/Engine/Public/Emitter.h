#pragma once
#include "CoreMinimal.h"
#include "ParticleBurstSignatureDelegate.h"
#include "Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleCollisionSignatureDelegate.h"
#include "ParticleDeathSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ParticleSpawnSignatureDelegate.h"
#include "Emitter.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class UMaterialInterface;

UCLASS()
class ENGINE_API AEmitter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    UPROPERTY()
    uint8 bDestroyOnSystemFinish: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPostUpdateTickGroup: 1;
    
    UPROPERTY(ReplicatedUsing=OnRep_bCurrentlyActive)
    uint8 bCurrentlyActive: 1;
    
    UPROPERTY(BlueprintAssignable)
    FParticleSpawnSignature OnParticleSpawn;
    
    UPROPERTY(BlueprintAssignable)
    FParticleBurstSignature OnParticleBurst;
    
    UPROPERTY(BlueprintAssignable)
    FParticleDeathSignature OnParticleDeath;
    
    UPROPERTY(BlueprintAssignable)
    FParticleCollisionSignature OnParticleCollide;
    
    AEmitter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleActive();
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(FName ParameterName, FVector Param);
    
    UFUNCTION(BlueprintCallable)
    void SetTemplate(UParticleSystem* NewTemplate);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName ParameterName, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    
    UFUNCTION(BlueprintCallable)
    void SetActorParameter(FName ParameterName, AActor* Param);
    
    UFUNCTION()
    void OnRep_bCurrentlyActive();
    
    UFUNCTION()
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

