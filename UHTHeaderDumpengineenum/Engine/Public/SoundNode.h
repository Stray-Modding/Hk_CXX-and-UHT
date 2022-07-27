#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundNode.generated.h"

class USoundNode;

UCLASS(Abstract, EditInlineNew)
class ENGINE_API USoundNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<USoundNode*> ChildNodes;
    
    USoundNode();
};

