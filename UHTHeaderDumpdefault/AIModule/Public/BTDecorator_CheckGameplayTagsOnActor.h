#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BTDecorator_CheckGameplayTagsOnActor.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorToCheck;
    
    UPROPERTY(EditAnywhere)
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY()
    FString CachedDescription;
    
public:
    UBTDecorator_CheckGameplayTagsOnActor();
};

