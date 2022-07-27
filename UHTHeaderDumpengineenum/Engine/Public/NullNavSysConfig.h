#pragma once
#include "CoreMinimal.h"
#include "NavigationSystemConfig.h"
#include "NullNavSysConfig.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UNullNavSysConfig : public UNavigationSystemConfig {
    GENERATED_BODY()
public:
    UNullNavSysConfig();
};

