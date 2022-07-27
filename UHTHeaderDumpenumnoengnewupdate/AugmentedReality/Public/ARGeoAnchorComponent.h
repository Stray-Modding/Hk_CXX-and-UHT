#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "EGeoAnchorComponentDebugMode.h"
#include "ARGeoAnchorUpdatePayload.h"
#include "ARGeoAnchorComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARGeoAnchorComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARGeoAnchorUpdatePayload ReplicatedPayload;
    
public:
    UARGeoAnchorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARGeoAnchorUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARGeoAnchorUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARGeoAnchorUpdatePayload& Payload);
    
};

