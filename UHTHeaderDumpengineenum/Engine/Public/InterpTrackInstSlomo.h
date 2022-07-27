#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstSlomo.generated.h"

UCLASS()
class UInterpTrackInstSlomo : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float OldTimeDilation;
    
    UInterpTrackInstSlomo();
};

