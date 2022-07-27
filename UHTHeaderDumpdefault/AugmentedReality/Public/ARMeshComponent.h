#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARMeshUpdatePayload.h"
#include "ARMeshComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARMeshComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARMeshUpdatePayload ReplicatedPayload;
    
public:
    UARMeshComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARMeshUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARMeshUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARMeshUpdatePayload& Payload);
    
};

