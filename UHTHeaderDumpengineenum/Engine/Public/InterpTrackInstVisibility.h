#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "EVisibilityTrackAction.h"
#include "InterpTrackInstVisibility.generated.h"

UCLASS()
class UInterpTrackInstVisibility : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVisibilityTrackAction> Action;
    
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstVisibility();
};

