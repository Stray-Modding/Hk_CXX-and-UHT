#pragma once
#include "CoreMinimal.h"
#include "InputBehaviorSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveGizmo.generated.h"

class UInputBehaviorSet;

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmo : public UObject, public IInputBehaviorSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputBehaviorSet* InputBehaviors;
    
public:
    UInteractiveGizmo();
    
    // Fix for true pure virtual functions not being implemented
};

