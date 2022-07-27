#pragma once
#include "CoreMinimal.h"
#include "EPlatformInterfaceDataType.generated.h"

UENUM(BlueprintType)
enum EPlatformInterfaceDataType {
    PIDT_None,
    PIDT_Int,
    PIDT_Float,
    PIDT_String,
    PIDT_Object,
    PIDT_Custom,
    PIDT_MAX UMETA(Hidden),
};

