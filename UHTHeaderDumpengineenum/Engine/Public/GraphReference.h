#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GraphReference.generated.h"

class UBlueprint;
class UEdGraph;

USTRUCT()
struct ENGINE_API FGraphReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UEdGraph* MacroGraph;
    
    UPROPERTY()
    UBlueprint* GraphBlueprint;
    
    UPROPERTY()
    FGuid GraphGuid;
    
public:
    FGraphReference();
};

