#pragma once
#include "CoreMinimal.h"
#include "AIMoveRequest.h"
#include "AITask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MoveTaskCompletedSignatureDelegate.h"
#include "EAIOptionFlag.h"
#include "AITask_MoveTo.generated.h"

class AActor;
class AAIController;
class UAITask_MoveTo;

UCLASS()
class AIMODULE_API UAITask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FMoveTaskCompletedSignature OnMoveFinished;
    
    UPROPERTY()
    FAIMoveRequest MoveRequest;
    
public:
    UAITask_MoveTo();
    UFUNCTION(BlueprintCallable)
    static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
    
};

