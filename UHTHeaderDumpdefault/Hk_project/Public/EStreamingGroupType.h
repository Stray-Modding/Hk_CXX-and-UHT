#pragma once
#include "CoreMinimal.h"
#include "EStreamingGroupType.generated.h"

UENUM()
enum EStreamingGroupType {
    EStreamingGroupType_Base,
    EStreamingGroupType_Persistent,
    EStreamingGroupType_Dynamic,
};

