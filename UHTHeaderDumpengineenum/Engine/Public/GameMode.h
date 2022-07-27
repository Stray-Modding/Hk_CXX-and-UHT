#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameModeBase.h"
#include "GameMode.generated.h"

class ULocalMessage;
class APlayerState;

UCLASS(NonTransient)
class ENGINE_API AGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FName MatchState;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDelayedStart: 1;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumSpectators;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumPlayers;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumBots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRespawnDelay;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumTravellingPlayers;
    
    UPROPERTY()
    TSubclassOf<ULocalMessage> EngineMessageClass;
    
    UPROPERTY()
    TArray<APlayerState*> InactivePlayerArray;
    
protected:
    UPROPERTY(EditAnywhere)
    float InactivePlayerStateLifeSpan;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInactivePlayers;
    
    UPROPERTY(Config)
    bool bHandleDedicatedServerReplays;
    
public:
    AGameMode();
    UFUNCTION(BlueprintCallable)
    void StartMatch();
    
    UFUNCTION(Exec)
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Say(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool ReadyToStartMatch();
    
    UFUNCTION(BlueprintNativeEvent)
    bool ReadyToEndMatch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSetMatchState(FName NewState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMatchInProgress() const;
    
    UFUNCTION(BlueprintPure)
    FName GetMatchState() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMatch();
    
    UFUNCTION(BlueprintCallable)
    void AbortMatch();
    
};

