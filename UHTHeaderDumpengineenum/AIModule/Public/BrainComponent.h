#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIResourceInterface.h"
#include "BrainComponent.generated.h"

class AAIController;
class UBlackboardComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UBrainComponent : public UActorComponent, public IAIResourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComp;
    
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
public:
    UBrainComponent();
    UFUNCTION(BlueprintCallable)
    void StopLogic(const FString& reason);
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
    UFUNCTION(BlueprintCallable)
    void RestartLogic();
    
    UFUNCTION(BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

