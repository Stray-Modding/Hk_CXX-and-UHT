#pragma once
#include "CoreMinimal.h"
#include "NavMovementComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PawnMovementComponent.generated.h"

class APawn;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPawnMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    APawn* PawnOwner;
    
public:
    UPawnMovementComponent();
    UFUNCTION(BlueprintPure)
    FVector K2_GetInputVector() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMoveInputIgnored() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPendingInputVector() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawnOwner() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastInputVector() const;
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddInputVector(FVector WorldVector, bool bForce);
    
};

