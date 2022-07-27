#pragma once
#include "CoreMinimal.h"
#include "InterpTrackVectorBase.h"
#include "InterpTrackVectorProp.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackVectorProp : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UInterpTrackVectorProp();
};

