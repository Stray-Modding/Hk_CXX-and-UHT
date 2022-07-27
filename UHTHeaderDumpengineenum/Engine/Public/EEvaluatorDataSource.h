#pragma once
#include "CoreMinimal.h"
#include "EEvaluatorDataSource.generated.h"

UENUM(BlueprintType)
namespace EEvaluatorDataSource {
    enum Type {
        EDS_SourcePose,
        EDS_DestinationPose,
        EDS_MAX UMETA(Hidden),
    };
}

