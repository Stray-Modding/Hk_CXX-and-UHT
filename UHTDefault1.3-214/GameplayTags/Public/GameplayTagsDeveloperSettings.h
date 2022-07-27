#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GameplayTagsDeveloperSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString DeveloperConfigName;
    
    UPROPERTY(Config, EditAnywhere)
    FName FavoriteTagSource;
    
    UGameplayTagsDeveloperSettings();
};

