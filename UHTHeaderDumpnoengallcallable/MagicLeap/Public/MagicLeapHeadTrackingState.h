#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapHeadTrackingMode.h"
#include "EMagicLeapHeadTrackingError.h"
#include "MagicLeapHeadTrackingState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapHeadTrackingState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapHeadTrackingMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMagicLeapHeadTrackingError Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Confidence;
    
    FMagicLeapHeadTrackingState();
};

