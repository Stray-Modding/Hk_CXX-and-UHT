#pragma once
#include "CoreMinimal.h"
#include "GameStateBase.h"
#include "GameState.generated.h"

UCLASS()
class ENGINE_API AGameState : public AGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_MatchState)
    FName MatchState;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName PreviousMatchState;
    
public:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ElapsedTime)
    int32 ElapsedTime;
    
    AGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_MatchState();
    
    UFUNCTION()
    void OnRep_ElapsedTime();
    
};

