#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInst.h"
#include "InterpTrackInstProperty.generated.h"

class UObject;

UCLASS()
class UInterpTrackInstProperty : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    TFieldPath<FProperty> InterpProperty;
    
    UPROPERTY()
    UObject* PropertyOuterObjectInst;
    
    UInterpTrackInstProperty();
};

