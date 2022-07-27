#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatProp.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackFloatProp : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UInterpTrackFloatProp();
};

