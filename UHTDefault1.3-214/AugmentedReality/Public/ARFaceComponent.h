#pragma once
#include "CoreMinimal.h"
#include "ARFaceUpdatePayload.h"
#include "ARComponent.h"
#include "EARFaceTransformMixing.h"
#include "EFaceComponentDebugMode.h"
#include "ARFaceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARFaceComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EARFaceTransformMixing TransformSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUpdateVertexNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFaceOutOfScreen;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARFaceUpdatePayload ReplicatedPayload;
    
public:
    UARFaceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARFaceUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARFaceUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARFaceUpdatePayload& Payload);
    
};

