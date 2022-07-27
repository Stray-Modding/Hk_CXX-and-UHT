#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTDecorator_SetTagCooldown.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_SetTagCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    float CooldownDuration;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UBTDecorator_SetTagCooldown();
};

