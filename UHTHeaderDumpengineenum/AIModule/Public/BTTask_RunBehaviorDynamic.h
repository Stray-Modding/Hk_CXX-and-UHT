#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTask_RunBehaviorDynamic.generated.h"

class UBehaviorTree;

UCLASS()
class AIMODULE_API UBTTask_RunBehaviorDynamic : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag InjectionTag;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* DefaultBehaviorAsset;
    
    UPROPERTY()
    UBehaviorTree* BehaviorAsset;
    
public:
    UBTTask_RunBehaviorDynamic();
};

