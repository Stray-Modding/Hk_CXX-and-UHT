#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENetworkFailure.h"
#include "OnPawnControllerChangedDelegate.h"
#include "ETravelFailure.h"
#include "GameInstance.generated.h"

class UOnlineSession;
class ULocalPlayer;

UCLASS(Blueprintable, Transient, Config=Game)
class ENGINE_API UGameInstance : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<ULocalPlayer*> LocalPlayers;
    
    UPROPERTY()
    UOnlineSession* OnlineSession;
    
    UPROPERTY()
    TArray<UObject*> ReferencedObjects;
    
    UPROPERTY(BlueprintAssignable)
    FOnPawnControllerChanged OnPawnControllerChangedDelegates;
    
public:
    UGameInstance();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveShutdown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleTravelError(TEnumAsByte<ETravelFailure::Type> FailureType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleNetworkError(TEnumAsByte<ENetworkFailure::Type> FailureType, bool bIsServer);
    
    UFUNCTION(Exec)
    void DebugRemovePlayer(int32 ControllerId);
    
    UFUNCTION(Exec)
    void DebugCreatePlayer(int32 ControllerId);
    
};

