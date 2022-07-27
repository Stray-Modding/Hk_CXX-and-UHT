#pragma once
#include "CoreMinimal.h"
#include "HapticFeedbackEffect_Base.h"
#include "HapticFeedbackDetails_Curve.h"
#include "HapticFeedbackEffect_Curve.generated.h"

UCLASS(MinimalAPI)
class UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHapticFeedbackDetails_Curve HapticDetails;
    
    UHapticFeedbackEffect_Curve();
};

