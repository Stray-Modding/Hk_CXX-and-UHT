#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTask_SetTagCooldown.generated.h"

UCLASS()
class AIMODULE_API UBTTask_SetTagCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    float CooldownDuration;
    
    UBTTask_SetTagCooldown();
};

