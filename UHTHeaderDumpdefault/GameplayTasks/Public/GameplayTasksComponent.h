#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GameplayTaskOwnerInterface.h"
#include "OnClaimedResourcesChangeSignatureDelegate.h"
#include "EGameplayTaskRunResult.h"
#include "GameplayTasksComponent.generated.h"

class UGameplayTask;
class UGameplayTaskResource;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTASKS_API UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bIsNetDirty: 1;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_SimulatedTasks)
    TArray<UGameplayTask*> SimulatedTasks;
    
    UPROPERTY()
    TArray<UGameplayTask*> TaskPriorityQueue;
    
    UPROPERTY()
    TArray<UGameplayTask*> TickingTasks;
    
    UPROPERTY(Transient)
    TArray<UGameplayTask*> KnownTasks;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FOnClaimedResourcesChangeSignature OnClaimedResourcesChange;
    
    UGameplayTasksComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_SimulatedTasks();
    
    UFUNCTION(BlueprintCallable)
    static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
    
    
    // Fix for true pure virtual functions not being implemented
};

