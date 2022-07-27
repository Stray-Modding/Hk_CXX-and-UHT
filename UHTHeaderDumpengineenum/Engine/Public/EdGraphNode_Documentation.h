#pragma once
#include "CoreMinimal.h"
#include "EdGraphNode.h"
#include "EdGraphNode_Documentation.generated.h"

UCLASS(MinimalAPI)
class UEdGraphNode_Documentation : public UEdGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Link;
    
    UPROPERTY()
    FString Excerpt;
    
    UEdGraphNode_Documentation();
};

