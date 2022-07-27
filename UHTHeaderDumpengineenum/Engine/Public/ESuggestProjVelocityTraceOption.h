#pragma once
#include "CoreMinimal.h"
#include "ESuggestProjVelocityTraceOption.generated.h"

UENUM(BlueprintType)
namespace ESuggestProjVelocityTraceOption {
    enum Type {
        DoNotTrace,
        TraceFullPath,
        OnlyTraceWhileAscending,
    };
}

