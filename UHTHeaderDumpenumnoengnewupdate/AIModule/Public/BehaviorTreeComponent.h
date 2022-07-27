#pragma once
#include "CoreMinimal.h"
#include "BrainComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BehaviorTreeComponent.generated.h"

class UBTNode;
class UBehaviorTree;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UBehaviorTreeComponent : public UBrainComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UBTNode*> NodeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UBehaviorTree* DefaultBehaviorTreeAsset;
    
public:
    UBehaviorTreeComponent();
    UFUNCTION(BlueprintCallable)
    void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    
    UFUNCTION(BlueprintPure)
    float GetTagCooldownEndTime(FGameplayTag CooldownTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
    
};

