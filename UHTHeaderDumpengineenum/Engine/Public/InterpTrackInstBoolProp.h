#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
#include "InterpTrackInstBoolProp.generated.h"

UCLASS()
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool ResetBool;
    
    UInterpTrackInstBoolProp();
};

