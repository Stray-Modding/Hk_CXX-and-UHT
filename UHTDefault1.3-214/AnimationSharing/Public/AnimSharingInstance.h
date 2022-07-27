#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimSharingInstance.generated.h"

class UAnimationSharingStateProcessor;
class AActor;
class UAnimSequence;
class UEnum;

UCLASS()
class UAnimSharingInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<AActor*> RegisteredActors;
    
    UPROPERTY(EditAnywhere, Transient)
    UAnimationSharingStateProcessor* StateProcessor;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UAnimSequence*> UsedAnimationSequences;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UEnum* StateEnum;
    
    UPROPERTY(Transient, VisibleAnywhere)
    AActor* SharingActor;
    
    UAnimSharingInstance();
};

