#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SimpleConstructionScript.generated.h"

class USCS_Node;

UCLASS(MinimalAPI)
class USimpleConstructionScript : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<USCS_Node*> RootNodes;
    
    UPROPERTY()
    TArray<USCS_Node*> AllNodes;
    
    UPROPERTY()
    USCS_Node* DefaultSceneRootNode;
    
public:
    USimpleConstructionScript();
};

