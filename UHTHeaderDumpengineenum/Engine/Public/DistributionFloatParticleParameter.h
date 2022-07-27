#pragma once
#include "CoreMinimal.h"
#include "DistributionFloatParameterBase.h"
#include "DistributionFloatParticleParameter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatParticleParameter : public UDistributionFloatParameterBase {
    GENERATED_BODY()
public:
    UDistributionFloatParticleParameter();
};

