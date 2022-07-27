#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Distribution.generated.h"

UCLASS(Abstract, CollapseCategories, DefaultToInstanced, EditInlineNew, MinimalAPI)
class UDistribution : public UObject {
    GENERATED_BODY()
public:
    UDistribution();
};

