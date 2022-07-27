#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Breakpoint.generated.h"

class UEdGraphNode;

UCLASS()
class ENGINE_API UBreakpoint : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    uint8 bEnabled: 1;
    
    UPROPERTY()
    UEdGraphNode* Node;
    
    UPROPERTY()
    uint8 bStepOnce: 1;
    
    UPROPERTY()
    uint8 bStepOnce_WasPreviouslyDisabled: 1;
    
    UPROPERTY()
    uint8 bStepOnce_RemoveAfterHit: 1;
    
public:
    UBreakpoint();
};

