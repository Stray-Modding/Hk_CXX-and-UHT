#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARQRCodeUpdatePayload.h"
#include "EQRCodeComponentDebugMode.h"
#include "ARQRCodeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARQRCodeComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARQRCodeUpdatePayload ReplicatedPayload;
    
public:
    UARQRCodeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARQRCodeUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARQRCodeUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARQRCodeUpdatePayload& Payload);
    
};

