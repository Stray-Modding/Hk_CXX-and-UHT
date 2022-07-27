#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UniqueNetIdRepl.h"
#include "Info.h"
#include "PlayerState.generated.h"

class ULocalMessage;
class APawn;
class APlayerState;

UCLASS(NotPlaceable)
class ENGINE_API APlayerState : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Score)
    float Score;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerId)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 Ping;
    
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 bShouldUpdateReplicatedPing: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsSpectator: 1;
    
    UPROPERTY(Replicated)
    uint8 bOnlySpectator: 1;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bIsABot: 1;
    
    UPROPERTY(ReplicatedUsing=OnRep_bIsInactive)
    uint8 bIsInactive: 1;
    
    UPROPERTY(Replicated)
    uint8 bFromPreviousLevel: 1;
    
    UPROPERTY(Replicated)
    int32 StartTime;
    
    UPROPERTY()
    TSubclassOf<ULocalMessage> EngineMessageClass;
    
    UPROPERTY()
    FString SavedNetworkAddress;
    
    UPROPERTY(ReplicatedUsing=OnRep_UniqueId)
    FUniqueNetIdRepl UniqueId;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    APawn* PawnPrivate;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlayerName)
    FString PlayerNamePrivate;
    
public:
    APlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOverrideWith(APlayerState* OldPlayerState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCopyProperties(APlayerState* NewPlayerState);
    
public:
    UFUNCTION()
    void OnRep_UniqueId();
    
    UFUNCTION()
    void OnRep_Score();
    
    UFUNCTION()
    void OnRep_PlayerName();
    
    UFUNCTION()
    void OnRep_PlayerId();
    
    UFUNCTION()
    void OnRep_bIsInactive();
    
    UFUNCTION(BlueprintPure)
    bool IsOnlyASpectator() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerName() const;
    
};

