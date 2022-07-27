#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARPointUpdatePayload.h"
#include "ARPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARPointComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARPointUpdatePayload ReplicatedPayload;
    
public:
    UARPointComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARPointUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARPointUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARPointUpdatePayload& Payload);
    
};

