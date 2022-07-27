#pragma once
#include "CoreMinimal.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatParticleParam.generated.h"

UCLASS(CollapseCategories)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UInterpTrackFloatParticleParam();
};

