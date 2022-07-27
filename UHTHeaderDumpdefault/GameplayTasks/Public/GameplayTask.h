#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTaskOwnerInterface.h"
#include "ETaskResourceOverlapPolicy.h"
#include "GameplayTask.generated.h"

class UGameplayTask;

UCLASS(Abstract, BlueprintType, Config=Game)
class GAMEPLAYTASKS_API UGameplayTask : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGenericGameplayTaskDelegate);
    
protected:
    UPROPERTY()
    FName InstanceName;
    
    UPROPERTY(Config)
    ETaskResourceOverlapPolicy ResourceOverlapPolicy;
    
    UPROPERTY()
    UGameplayTask* ChildTask;
    
public:
    UGameplayTask();
    UFUNCTION(BlueprintCallable)
    void ReadyForActivation();
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    
    // Fix for true pure virtual functions not being implemented
};

