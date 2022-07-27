#pragma once
#include "CoreMinimal.h"
#include "GameplayTagCategoryRemap.h"
#include "GameplayTagsList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "GameplayTagRedirect.h"
#include "RestrictedConfigInfo.h"
#include "GameplayTagsSettings.generated.h"

UCLASS(DefaultConfig, Config=GameplayTags)
class GAMEPLAYTAGS_API UGameplayTagsSettings : public UGameplayTagsList {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool ImportTagsFromConfig;
    
    UPROPERTY(Config, EditAnywhere)
    bool WarnOnInvalidTags;
    
    UPROPERTY(Config, EditAnywhere)
    bool ClearInvalidTags;
    
    UPROPERTY(Config, EditAnywhere)
    bool FastReplication;
    
    UPROPERTY(Config, EditAnywhere)
    FString InvalidTagCharacters;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> GameplayTagTableList;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FGameplayTagRedirect> GameplayTagRedirects;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> CommonlyReplicatedTags;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumBitsForContainerSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NetIndexFirstBitSegment;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;
    
    UGameplayTagsSettings();
};

