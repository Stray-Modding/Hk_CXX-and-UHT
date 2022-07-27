#include "EndTurnCallbackProxy.h"

class APlayerController;
class UObject;
class UEndTurnCallbackProxy;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

