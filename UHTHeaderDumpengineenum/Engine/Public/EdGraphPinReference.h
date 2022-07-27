#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EdGraphPinReference.generated.h"

class UEdGraphNode;

USTRUCT()
struct ENGINE_API FEdGraphPinReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<UEdGraphNode> OwningNode;
    
    UPROPERTY()
    FGuid PinId;
    
public:
    FEdGraphPinReference();
};

