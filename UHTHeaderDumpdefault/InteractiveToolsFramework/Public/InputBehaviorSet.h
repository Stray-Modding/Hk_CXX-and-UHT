#pragma once
#include "CoreMinimal.h"
#include "BehaviorInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBehaviorSet.generated.h"

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInputBehaviorSet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FBehaviorInfo> Behaviors;
    
public:
    UInputBehaviorSet();
};

