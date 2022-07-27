#pragma once
#include "CoreMinimal.h"
#include "DistributionVectorParameterBase.h"
#include "DistributionVectorParticleParameter.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionVectorParticleParameter : public UDistributionVectorParameterBase {
    GENERATED_BODY()
public:
    UDistributionVectorParticleParameter();
};

