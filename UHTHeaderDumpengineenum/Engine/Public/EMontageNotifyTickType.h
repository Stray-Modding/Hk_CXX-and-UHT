#pragma once
#include "CoreMinimal.h"
#include "EMontageNotifyTickType.generated.h"

UENUM(BlueprintType)
namespace EMontageNotifyTickType {
    enum Type {
        Queued,
        BranchingPoint,
    };
}

