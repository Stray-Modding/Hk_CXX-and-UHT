#pragma once
#include "CoreMinimal.h"
#include "QuartzTimeSignature.h"
#include "QuartzClockSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FQuartzClockSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuartzTimeSignature TimeSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreLevelChange;
    
    FQuartzClockSettings();
};

