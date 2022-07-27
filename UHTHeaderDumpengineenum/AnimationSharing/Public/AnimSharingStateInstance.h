#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingStateInstance.generated.h"

class UAnimSequence;
class UAnimSharingInstance;
class AActor;

UCLASS(NonTransient)
class ANIMATIONSHARING_API UAnimSharingStateInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    UAnimSequence* AnimationToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float PermutationTimeOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float PlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bStateBool;
    
private:
    UPROPERTY(Transient)
    UAnimSharingInstance* Instance;
    
public:
    UAnimSharingStateInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void GetInstancedActors(TArray<AActor*>& Actors);
    
};

