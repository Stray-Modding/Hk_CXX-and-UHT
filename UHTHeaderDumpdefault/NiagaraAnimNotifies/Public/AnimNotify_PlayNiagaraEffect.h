#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimNotify_PlayNiagaraEffect.generated.h"

class UNiagaraSystem;
class UFXSystemComponent;

UCLASS(CollapseCategories)
class NIAGARAANIMNOTIFIES_API UAnimNotify_PlayNiagaraEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* Template;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAbsoluteScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UAnimNotify_PlayNiagaraEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* GetSpawnedEffect() const;
    
};

