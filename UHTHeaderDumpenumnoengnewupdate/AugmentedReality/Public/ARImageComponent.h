#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARImageUpdatePayload.h"
#include "EImageComponentDebugMode.h"
#include "ARImageComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARImageComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARImageUpdatePayload ReplicatedPayload;
    
public:
    UARImageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARImageUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARImageUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARImageUpdatePayload& Payload);
    
};

