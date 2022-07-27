#pragma once
#include "CoreMinimal.h"
#include "EFourPlayerSplitScreenType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EThreePlayerSplitScreenType.h"
#include "ETwoPlayerSplitScreenType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "GameModeName.h"
#include "GameMapsSettings.generated.h"

class UGameMapsSettings;

UCLASS(BlueprintType, DefaultConfig)
class ENGINESETTINGS_API UGameMapsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FString LocalMapOptions;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath TransitionMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseSplitscreen;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EThreePlayerSplitScreenType::Type> ThreePlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOffsetPlayerGamepadIds;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath GameInstanceClass;
    
private:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath GameDefaultMap;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath ServerDefaultMap;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath GlobalDefaultGameMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftClassPath GlobalDefaultServerGameMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FGameModeName> GameModeMapPrefixes;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FGameModeName> GameModeClassAliases;
    
public:
    UGameMapsSettings();
    UFUNCTION(BlueprintCallable)
    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    
    UFUNCTION(BlueprintPure)
    bool GetSkipAssigningGamepadToPlayer1() const;
    
    UFUNCTION(BlueprintPure)
    static UGameMapsSettings* GetGameMapsSettings();
    
};

