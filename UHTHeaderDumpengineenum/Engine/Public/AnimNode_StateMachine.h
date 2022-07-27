#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "AnimNode_StateMachine.generated.h"

USTRUCT()
struct ENGINE_API FAnimNode_StateMachine : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 StateMachineIndexInClass;
    
    UPROPERTY(EditAnywhere)
    int32 MaxTransitionsPerFrame;
    
    UPROPERTY(EditAnywhere)
    bool bSkipFirstUpdateTransition;
    
    UPROPERTY(EditAnywhere)
    bool bReinitializeOnBecomingRelevant;
    
    FAnimNode_StateMachine();
};

