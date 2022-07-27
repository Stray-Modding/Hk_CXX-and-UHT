#pragma once
#include "CoreMinimal.h"
#include "InterpTrackLinearColorBase.h"
#include "InterpTrackLinearColorProp.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UInterpTrackLinearColorProp();
};

