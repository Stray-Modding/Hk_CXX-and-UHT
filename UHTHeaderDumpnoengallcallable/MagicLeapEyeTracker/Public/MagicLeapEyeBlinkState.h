#pragma once
#include "CoreMinimal.h"
#include "MagicLeapEyeBlinkState.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAPEYETRACKER_API FMagicLeapEyeBlinkState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeftEyeBlinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RightEyeBlinked;
    
    FMagicLeapEyeBlinkState();
};

