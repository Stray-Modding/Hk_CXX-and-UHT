#pragma once
#include "CoreMinimal.h"
#include "ELuminComponentSubElementType.generated.h"

UENUM(BlueprintType)
enum class ELuminComponentSubElementType : uint8 {
    FileExtension,
    MimeType,
    Mode,
    MusicAttribute,
    Schema,
};

