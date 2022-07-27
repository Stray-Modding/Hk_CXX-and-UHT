#pragma once
#include "CoreMinimal.h"
#include "ETravelFailure.generated.h"

UENUM(BlueprintType)
namespace ETravelFailure {
    enum Type {
        NoLevel,
        LoadMapFailure,
        InvalidURL,
        PackageMissing,
        PackageVersion,
        NoDownload,
        TravelFailure,
        CheatCommands,
        PendingNetGameCreateFailure,
        CloudSaveFailure,
        ServerTravelFailure,
        ClientTravelFailure,
    };
}

