#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstEvent();
};

