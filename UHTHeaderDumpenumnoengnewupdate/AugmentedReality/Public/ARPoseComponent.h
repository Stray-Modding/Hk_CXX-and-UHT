#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARPoseUpdatePayload.h"
#include "EPoseComponentDebugMode.h"
#include "ARPoseComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARPoseComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARPoseUpdatePayload ReplicatedPayload;
    
public:
    UARPoseComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARPoseUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARPoseUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARPoseUpdatePayload& Payload);
    
};

