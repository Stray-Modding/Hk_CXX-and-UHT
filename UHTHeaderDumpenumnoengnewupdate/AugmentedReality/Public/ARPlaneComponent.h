#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARPlaneUpdatePayload.h"
#include "EPlaneComponentDebugMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EARObjectClassification.h"
#include "ARPlaneComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARPlaneComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Payload)
    FARPlaneUpdatePayload ReplicatedPayload;
    
public:
    UARPlaneComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectClassificationDebugColors(const TMap<EARObjectClassification, FLinearColor>& InColors);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARPlaneUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdate(const FARPlaneUpdatePayload& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAdd(const FARPlaneUpdatePayload& Payload);
    
    UFUNCTION(BlueprintPure)
    static TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();
    
};

