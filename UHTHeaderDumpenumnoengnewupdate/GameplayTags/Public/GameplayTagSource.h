#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.h"
#include "GameplayTagSource.generated.h"

class URestrictedGameplayTagsList;
class UGameplayTagsList;

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

