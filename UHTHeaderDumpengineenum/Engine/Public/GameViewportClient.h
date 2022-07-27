#pragma once
#include "CoreMinimal.h"
#include "ScriptViewportClient.h"
#include "DebugDisplayProperty.h"
#include "GameViewportClient.generated.h"

class UWorld;
class UGameInstance;
class UConsole;

UCLASS(NonTransient, Within=Engine)
class ENGINE_API UGameViewportClient : public UScriptViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConsole* ViewportConsole;
    
    UPROPERTY()
    TArray<FDebugDisplayProperty> DebugProperties;
    
    UPROPERTY(Config)
    int32 MaxSplitscreenPlayers;
    
protected:
    UPROPERTY()
    UWorld* World;
    
    UPROPERTY()
    UGameInstance* GameInstance;
    
public:
    UGameViewportClient();
    UFUNCTION(Exec)
    void SSSwapControllers();
    
    UFUNCTION(Exec)
    void ShowTitleSafeArea();
    
    UFUNCTION(Exec)
    void SetConsoleTarget(int32 PlayerIndex);
    
};

