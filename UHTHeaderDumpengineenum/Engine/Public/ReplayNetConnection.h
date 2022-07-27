#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "ReplayNetConnection.generated.h"

UCLASS(NonTransient)
class ENGINE_API UReplayNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    UReplayNetConnection();
};

