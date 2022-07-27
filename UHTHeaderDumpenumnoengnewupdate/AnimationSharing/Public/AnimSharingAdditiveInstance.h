#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingAdditiveInstance.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(NonTransient)
class UAnimSharingAdditiveInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    TWeakObjectPtr<UAnimSequence> AdditiveAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float Alpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bStateBool;
    
public:
    UAnimSharingAdditiveInstance();
};

