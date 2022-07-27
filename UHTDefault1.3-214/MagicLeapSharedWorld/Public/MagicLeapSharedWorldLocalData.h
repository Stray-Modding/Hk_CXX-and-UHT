#pragma once
#include "CoreMinimal.h"
#include "MagicLeapSharedWorldPinData.h"
#include "MagicLeapSharedWorldLocalData.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPSHAREDWORLD_API FMagicLeapSharedWorldLocalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FMagicLeapSharedWorldPinData> LocalPins;
    
    FMagicLeapSharedWorldLocalData();
};

