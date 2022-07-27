#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Info.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GameModeBase.generated.h"

class AGameSession;
class AGameStateBase;
class ASpectatorPawn;
class APlayerState;
class APlayerController;
class APawn;
class AHUD;
class AServerStatReplicator;
class AController;
class AActor;

UCLASS(NotPlaceable, Transient, Config=Game)
class ENGINE_API AGameModeBase : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString OptionsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AGameSession> GameSessionClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<AGameStateBase> GameStateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<APlayerController> PlayerControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<APlayerState> PlayerStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AHUD> HUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APawn> DefaultPawnClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<APlayerController> ReplaySpectatorPlayerControllerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, NoClear)
    TSubclassOf<AServerStatReplicator> ServerStatReplicatorClass;
    
    UPROPERTY(Transient)
    AGameSession* GameSession;
    
    UPROPERTY(Transient)
    AGameStateBase* GameState;
    
    UPROPERTY(Transient)
    AServerStatReplicator* ServerStatReplicator;
    
    UPROPERTY(EditAnywhere)
    FText DefaultPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseSeamlessTravel: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bStartPlayersAsSpectators: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPauseable: 1;
    
public:
    AGameModeBase();
    UFUNCTION(BlueprintCallable)
    void StartPlay();
    
    UFUNCTION(BlueprintNativeEvent)
    APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);
    
    UFUNCTION(BlueprintNativeEvent)
    APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldReset(AActor* ActorToReset);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenuHost();
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayerAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
    
    UFUNCTION(BlueprintCallable)
    void RestartPlayer(AController* NewPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ResetLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerCanRestart(APlayerController* Player);
    
    UFUNCTION(BlueprintNativeEvent)
    bool MustSpectate(APlayerController* NewPlayerController) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_PostLogin(APlayerController* NewPlayer);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRestartPlayer(AController* NewPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnLogout(AController* ExitingController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnChangeName(AController* Other, const FString& NewName, bool bNameChange);
    
    UFUNCTION(BlueprintPure)
    AActor* K2_FindPlayerStart(AController* Player, const FString& IncomingName);
    
    UFUNCTION(BlueprintNativeEvent)
    void InitStartSpot(AActor* StartSpot, AController* NewPlayer);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void InitializeHUDForPlayer(APlayerController* NewPlayer);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasMatchStarted() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMatchEnded() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleStartingNewPlayer(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumSpectators();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetDefaultPawnClassForController(AController* InController);
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* FindPlayerStart(AController* Player, const FString& IncomingName);
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* ChoosePlayerStart(AController* Player);
    
    UFUNCTION(BlueprintCallable)
    void ChangeName(AController* Controller, const FString& NewName, bool bNameChange);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget);
    
};

