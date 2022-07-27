#pragma once
#include "CoreMinimal.h"
#include "EdGraphSchemaAction.h"
#include "EdGraphSchemaAction_NewNode.generated.h"

class UEdGraphNode;

USTRUCT()
struct ENGINE_API FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEdGraphNode* NodeTemplate;
    
    FEdGraphSchemaAction_NewNode();
};

