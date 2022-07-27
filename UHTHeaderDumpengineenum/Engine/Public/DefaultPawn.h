#pragma once
#include "CoreMinimal.h"
#include "Pawn.h"
#include "DefaultPawn.generated.h"

class USphereComponent;
class UPawnMovementComponent;
class UStaticMeshComponent;

UCLASS()
class ENGINE_API ADefaultPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float BaseLookUpRate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnMovementComponent* MovementComponent;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAddDefaultMovementBindings: 1;
    
    ADefaultPawn();
    UFUNCTION(BlueprintCallable)
    void TurnAtRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void MoveUp_World(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Val);
    
    UFUNCTION(BlueprintCallable)
    void LookUpAtRate(float Rate);
    
};

