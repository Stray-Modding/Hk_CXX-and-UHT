#pragma once
#include "CoreMinimal.h"
#include "PendingNetGame.h"
#include "DemoPendingNetGame.generated.h"

UCLASS(NonTransient)
class UDemoPendingNetGame : public UPendingNetGame {
    GENERATED_BODY()
public:
    UDemoPendingNetGame();
};

