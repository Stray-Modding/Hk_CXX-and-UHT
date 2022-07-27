#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandleSaveGameDelegate.generated.h"

class USaveGame;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAsyncHandleSaveGame, USaveGame*, SaveGame, bool, bSuccess);

