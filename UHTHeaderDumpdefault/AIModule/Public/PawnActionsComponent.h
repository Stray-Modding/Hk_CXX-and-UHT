#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PawnActionEvent.h"
#include "PawnActionStack.h"
#include "EAIRequestPriority.h"
#include "EPawnActionAbortState.h"
#include "PawnActionsComponent.generated.h"

class UObject;
class APawn;
class UPawnAction;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UPawnActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    APawn* ControlledPawn;
    
    UPROPERTY()
    TArray<FPawnActionStack> ActionStacks;
    
    UPROPERTY()
    TArray<FPawnActionEvent> ActionEvents;
    
    UPROPERTY(Transient)
    UPawnAction* CurrentAction;
    
public:
    UPawnActionsComponent();
    UFUNCTION(BlueprintCallable)
    bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(UPawnAction* ActionToAbort);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(UPawnAction* ActionToAbort);
    
};

