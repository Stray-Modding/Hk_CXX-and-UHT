#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
#include "EnvQueryTest_GameplayTags.generated.h"

UCLASS(MinimalAPI)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY()
    bool bUpdatedToUseQuery;
    
    UPROPERTY()
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY()
    FGameplayTagContainer GameplayTags;
    
public:
    UEnvQueryTest_GameplayTags();
};

