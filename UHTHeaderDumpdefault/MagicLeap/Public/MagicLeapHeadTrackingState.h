#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingMode.h"
#include "EMagicLeapHeadTrackingError.h"
#include "MagicLeapHeadTrackingState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapHeadTrackingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapHeadTrackingMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMagicLeapHeadTrackingError Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Confidence;
    
    FMagicLeapHeadTrackingState();
};

