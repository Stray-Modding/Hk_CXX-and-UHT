#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstAnimControl.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstAnimControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float LastUpdatePosition;
    
    UInterpTrackInstAnimControl();
};

