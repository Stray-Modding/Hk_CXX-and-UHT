#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstFloatProp.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstFloatProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ResetFloat;
    
    UInterpTrackInstFloatProp();
};

