#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryGenerator_SimpleGrid.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryGenerator_PathingGrid.generated.h"

class UNavigationQueryFilter;

UCLASS(EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PathToItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    UEnvQueryGenerator_PathingGrid();
};

