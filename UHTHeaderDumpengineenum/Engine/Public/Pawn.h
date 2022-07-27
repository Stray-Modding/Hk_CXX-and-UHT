#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAutoPossessAI.h"
#include "Actor.h"
#include "EAutoReceiveInput.h"
#include "NavAgentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Pawn.generated.h"

class AController;
class APlayerState;
class UPawnMovementComponent;
class APawn;

UCLASS(Config=Game)
class ENGINE_API APawn : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseControllerRotationPitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseControllerRotationYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseControllerRotationRoll: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanAffectNavigationGeneration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseEyeHeight;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAutoReceiveInput::Type> AutoPossessPlayer;
    
    UPROPERTY(EditAnywhere)
    EAutoPossessAI AutoPossessAI;
    
    UPROPERTY(Replicated)
    uint8 RemoteViewPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AController> AIControllerClass;
    
private:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AController* LastHitBy;
    
    UPROPERTY(ReplicatedUsing=OnRep_Controller)
    AController* Controller;
    
protected:
    UPROPERTY(Transient)
    FVector ControlInputVector;
    
    UPROPERTY(Transient)
    FVector LastControlInputVector;
    
public:
    APawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnDefaultController();
    
    UFUNCTION(BlueprintCallable)
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUnpossessed(AController* OldController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePossessed(AController* NewController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker);
    
    UFUNCTION()
    void OnRep_PlayerState();
    
    UFUNCTION()
    void OnRep_Controller();
    
    UFUNCTION(BlueprintCallable)
    void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintPure)
    FVector K2_GetMovementInputVector() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPawnControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBotControlled() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPendingMovementInputVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetNavAgentLocation() const;
    
    UFUNCTION(BlueprintPure)
    UPawnMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    static AActor* GetMovementBaseActor(const APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    FVector GetLastMovementInputVector() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotation() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseAimRotation() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromControllerPendingDestroy();
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeMovementInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerYawInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerRollInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddControllerPitchInput(float Val);
    
    
    // Fix for true pure virtual functions not being implemented
};

