#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EdGraph.generated.h"

class UEdGraphSchema;
class UEdGraphNode;

UCLASS()
class ENGINE_API UEdGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UEdGraphSchema> Schema;
    
    UPROPERTY()
    TArray<UEdGraphNode*> Nodes;
    
    UPROPERTY()
    uint8 bEditable: 1;
    
    UPROPERTY()
    uint8 bAllowDeletion: 1;
    
    UPROPERTY()
    uint8 bAllowRenaming: 1;
    
    UEdGraph();
};

