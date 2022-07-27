#pragma once
#include "CoreMinimal.h"
#include "OnlineShowLoginUIResultDelegate.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnlineShowLoginUIResult, APlayerController*, PlayerController);

