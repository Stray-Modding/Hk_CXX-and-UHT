#pragma once
#include "CoreMinimal.h"
#include "ELocationBoneSocketSource.generated.h"

UENUM(BlueprintType)
enum ELocationBoneSocketSource {
    BONESOCKETSOURCE_Bones,
    BONESOCKETSOURCE_Sockets,
    BONESOCKETSOURCE_MAX UMETA(Hidden),
};

