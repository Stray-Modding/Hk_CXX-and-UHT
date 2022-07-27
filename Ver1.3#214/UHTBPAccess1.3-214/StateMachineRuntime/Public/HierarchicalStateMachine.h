#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HierarchicalStateMachine.generated.h"

UCLASS(Blueprintable)
class STATEMACHINERUNTIME_API UHierarchicalStateMachine : public UObject {
    GENERATED_BODY()
public:
    UHierarchicalStateMachine();
};

