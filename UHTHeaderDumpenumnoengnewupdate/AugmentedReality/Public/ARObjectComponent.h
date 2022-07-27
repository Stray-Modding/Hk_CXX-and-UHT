#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARObjectUpdatePayload.h"
#include "ARObjectComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARObjectComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARObjectUpdatePayload ReplicatedPayload;
    
public:
    UARObjectComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARObjectUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARObjectUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARObjectUpdatePayload& Payload);
    
};

