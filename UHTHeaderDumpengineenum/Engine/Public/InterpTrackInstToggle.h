#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "ETrackToggleAction.h"
#include "InterpTrackInstToggle.generated.h"

UCLASS()
class UInterpTrackInstToggle : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrackToggleAction> Action;
    
    UPROPERTY()
    float LastUpdatePosition;
    
    UPROPERTY()
    uint8 bSavedActiveState: 1;
    
    UInterpTrackInstToggle();
};

