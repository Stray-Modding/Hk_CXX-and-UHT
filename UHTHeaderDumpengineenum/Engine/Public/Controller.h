#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "NavAgentInterface.h"
#include "InstigatedAnyDamageSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Controller.generated.h"

class APlayerState;
class APawn;
class UDamageType;
class ACharacter;
class USceneComponent;
class APlayerController;

UCLASS(Abstract, NotPlaceable)
class ENGINE_API AController : public AActor, public INavAgentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerState)
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintAssignable)
    FInstigatedAnyDamageSignature OnInstigatedAnyDamage;
    
    UPROPERTY()
    FName StateName;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_Pawn)
    APawn* Pawn;
    
    UPROPERTY()
    ACharacter* Character;
    
    UPROPERTY(Export)
    USceneComponent* TransformComponent;
    
protected:
    UPROPERTY()
    FRotator ControlRotation;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAttachToPawn: 1;
    
public:
    AController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnPossess();
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMoveInput(bool bNewMoveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLookInput(bool bNewLookInput);
    
    UFUNCTION(BlueprintCallable)
    void SetControlRotation(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMoveInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreLookInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInputFlags();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUnPossess(APawn* UnpossessedPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePossess(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveInstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Possess(APawn* InPawn);
    
    UFUNCTION()
    void OnRep_PlayerState();
    
    UFUNCTION()
    void OnRep_Pawn();
    
    UFUNCTION(BlueprintPure)
    bool LineOfSightTo(const AActor* Other, FVector ViewPoint, bool bAlternateChecks) const;
    
    UFUNCTION(BlueprintPure)
    APawn* K2_GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLookInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalController() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetViewTarget() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDesiredRotation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetControlRotation() const;
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSetRotation(FRotator NewRotation, bool bResetCamera);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSetLocation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    APlayerController* CastToPlayerController();
    
    
    // Fix for true pure virtual functions not being implemented
};

