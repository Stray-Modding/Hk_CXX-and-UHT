#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BPInterfaceDescription.generated.h"

class UInterface;
class IInterface;
class UEdGraph;

USTRUCT()
struct FBPInterfaceDescription {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UInterface> Interface;
    
    UPROPERTY()
    TArray<UEdGraph*> Graphs;
    
    ENGINE_API FBPInterfaceDescription();
};

