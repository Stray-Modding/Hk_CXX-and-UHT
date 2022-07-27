#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GraphNodeContextMenuContext.generated.h"

class UEdGraph;
class UBlueprint;
class UEdGraphNode;

UCLASS()
class ENGINE_API UGraphNodeContextMenuContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlueprint* Blueprint;
    
    UPROPERTY()
    UEdGraph* Graph;
    
    UPROPERTY()
    UEdGraphNode* Node;
    
    UPROPERTY()
    bool bIsDebugging;
    
    UGraphNodeContextMenuContext();
};

