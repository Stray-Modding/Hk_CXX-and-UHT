#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPerfBaselineStats.h"
#include "NiagaraBaselineController.generated.h"

class UNiagaraEffectType;
class ANiagaraPerfBaselineActor;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraBaselineController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TestDuration;
    
    UPROPERTY(BlueprintReadOnly)
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(BlueprintReadOnly)
    ANiagaraPerfBaselineActor* Owner;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> System;
    
public:
    UNiagaraBaselineController();
    UFUNCTION(BlueprintNativeEvent)
    bool OnTickTest();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOwnerTick(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndTest(FNiagaraPerfBaselineStats Stats);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnBeginTest();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraSystem* GetSystem();
    
};

