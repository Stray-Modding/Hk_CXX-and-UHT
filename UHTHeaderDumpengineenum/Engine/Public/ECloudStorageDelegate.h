#pragma once
#include "CoreMinimal.h"
#include "ECloudStorageDelegate.generated.h"

UENUM(BlueprintType)
enum ECloudStorageDelegate {
    CSD_KeyValueReadComplete,
    CSD_KeyValueWriteComplete,
    CSD_ValueChanged,
    CSD_DocumentQueryComplete,
    CSD_DocumentReadComplete,
    CSD_DocumentWriteComplete,
    CSD_DocumentConflictDetected,
    CSD_MAX UMETA(Hidden),
};

