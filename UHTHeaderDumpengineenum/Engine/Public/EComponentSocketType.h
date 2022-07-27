#pragma once
#include "CoreMinimal.h"
#include "EComponentSocketType.generated.h"

UENUM(BlueprintType)
namespace EComponentSocketType {
    enum Type {
        Invalid,
        Bone,
        Socket,
    };
}

