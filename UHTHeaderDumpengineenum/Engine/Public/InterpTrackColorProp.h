#pragma once
#include "CoreMinimal.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackColorProp.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackColorProp : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UInterpTrackColorProp();
};

