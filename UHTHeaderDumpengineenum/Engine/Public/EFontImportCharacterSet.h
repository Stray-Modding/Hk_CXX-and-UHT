#pragma once
#include "CoreMinimal.h"
#include "EFontImportCharacterSet.generated.h"

UENUM(BlueprintType)
enum EFontImportCharacterSet {
    FontICS_Default,
    FontICS_Ansi,
    FontICS_Symbol,
    FontICS_MAX UMETA(Hidden),
};

