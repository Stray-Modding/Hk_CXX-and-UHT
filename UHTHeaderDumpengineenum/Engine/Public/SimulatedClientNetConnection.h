#pragma once
#include "CoreMinimal.h"
#include "NetConnection.h"
#include "SimulatedClientNetConnection.generated.h"

UCLASS(NonTransient)
class ENGINE_API USimulatedClientNetConnection : public UNetConnection {
    GENERATED_BODY()
public:
    USimulatedClientNetConnection();
};

