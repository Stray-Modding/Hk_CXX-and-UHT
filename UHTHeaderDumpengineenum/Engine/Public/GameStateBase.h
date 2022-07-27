#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Info.h"
#include "GameStateBase.generated.h"

class AGameModeBase;
class APlayerState;
class ASpectatorPawn;
class AController;

UCLASS(NotPlaceable, Config=Game)
class ENGINE_API AGameStateBase : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_GameModeClass)
    TSubclassOf<AGameModeBase> GameModeClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGameModeBase* AuthorityGameMode;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SpectatorClass)
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APlayerState*> PlayerArray;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedHasBegunPlay)
    bool bReplicatedHasBegunPlay;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedWorldTimeSeconds)
    float ReplicatedWorldTimeSeconds;
    
    UPROPERTY(Transient)
    float ServerWorldTimeSecondsDelta;
    
    UPROPERTY(EditDefaultsOnly)
    float ServerWorldTimeSecondsUpdateFrequency;
    
public:
    AGameStateBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_SpectatorClass();
    
    UFUNCTION()
    void OnRep_ReplicatedWorldTimeSeconds();
    
    UFUNCTION()
    void OnRep_ReplicatedHasBegunPlay();
    
    UFUNCTION()
    void OnRep_GameModeClass();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasMatchStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMatchEnded() const;
    
    UFUNCTION(BlueprintPure)
    bool HasBegunPlay() const;
    
    UFUNCTION(BlueprintPure)
    float GetServerWorldTimeSeconds() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerStartTime(AController* Controller) const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerRespawnDelay(AController* Controller) const;
    
};

