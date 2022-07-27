#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstFloatAnimBPParam.generated.h"

class UAnimInstance;

UCLASS()
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(Transient)
    float ResetFloat;
    
    UInterpTrackInstFloatAnimBPParam();
};

