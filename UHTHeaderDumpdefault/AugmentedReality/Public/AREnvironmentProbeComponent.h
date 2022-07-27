#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "AREnvironmentProbeUpdatePayload.h"
#include "AREnvironmentProbeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UAREnvironmentProbeComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FAREnvironmentProbeUpdatePayload ReplicatedPayload;
    
public:
    UAREnvironmentProbeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FAREnvironmentProbeUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& Payload);
    
};

