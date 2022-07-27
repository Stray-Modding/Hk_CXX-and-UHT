#pragma once
#include "CoreMinimal.h"
#include "ENetworkFailure.generated.h"

UENUM(BlueprintType)
namespace ENetworkFailure {
    enum Type {
        NetDriverAlreadyExists,
        NetDriverCreateFailure,
        NetDriverListenFailure,
        ConnectionLost,
        ConnectionTimeout,
        FailureReceived,
        OutdatedClient,
        OutdatedServer,
        PendingConnectionFailure,
        NetGuidMismatch,
        NetChecksumMismatch,
    };
}

