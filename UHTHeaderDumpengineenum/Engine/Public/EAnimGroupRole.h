#pragma once
#include "CoreMinimal.h"
#include "EAnimGroupRole.generated.h"

UENUM(BlueprintType)
namespace EAnimGroupRole {
    enum Type {
        CanBeLeader,
        AlwaysFollower,
        AlwaysLeader,
        TransitionLeader,
        TransitionFollower,
    };
}

