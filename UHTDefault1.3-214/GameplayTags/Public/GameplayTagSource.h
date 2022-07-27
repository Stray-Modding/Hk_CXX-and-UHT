#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.h"
#include "GameplayTagSource.generated.h"

class UGameplayTagsList;
class URestrictedGameplayTagsList;

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SourceName;
    
    UPROPERTY()
    EGameplayTagSourceType SourceType;
    
    UPROPERTY()
    UGameplayTagsList* SourceTagList;
    
    UPROPERTY()
    URestrictedGameplayTagsList* SourceRestrictedTagList;
    
    FGameplayTagSource();
};

