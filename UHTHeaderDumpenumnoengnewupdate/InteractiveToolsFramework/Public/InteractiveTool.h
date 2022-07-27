#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehaviorSource.h"
#include "InteractiveTool.generated.h"

class UInputBehaviorSet;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveTool : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInputBehaviorSet* InputBehaviors;
    
    UPROPERTY()
    TArray<UObject*> ToolPropertyObjects;
    
public:
    UInteractiveTool();
    
    // Fix for true pure virtual functions not being implemented
};

