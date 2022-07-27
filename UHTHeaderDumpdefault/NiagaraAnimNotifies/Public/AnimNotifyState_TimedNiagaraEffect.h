#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNotifyState_TimedNiagaraEffect.generated.h"

class UNiagaraSystem;
class UFXSystemComponent;
class UMeshComponent;

UCLASS(CollapseCategories, EditInlineNew)
class NIAGARAANIMNOTIFIES_API UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* Template;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyAtEnd;
    
    UAnimNotifyState_TimedNiagaraEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* GetSpawnedEffect(UMeshComponent* MeshComp) const;
    
};

