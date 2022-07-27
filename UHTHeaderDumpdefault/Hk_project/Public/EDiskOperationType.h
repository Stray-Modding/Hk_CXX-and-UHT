#pragma once
#include "CoreMinimal.h"
#include "EDiskOperationType.generated.h"

UENUM()
enum EDiskOperationType {
    DiskOperationType_Read,
    DiskOperationType_Write,
    DiskOperationType_Delete,
    DiskOperationType_Check,
    DiskOperationType_MAX UMETA(Hidden),
};

