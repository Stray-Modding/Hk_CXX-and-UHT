#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest.h"
#include "EEnvTestPathfinding.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryTest_Pathfinding.generated.h"

class UNavigationQueryFilter;
class UEnvQueryContext;

UCLASS()
class AIMODULE_API UEnvQueryTest_Pathfinding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestPathfinding::Type> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue PathFromContext;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderBoolValue SkipUnreachable;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UEnvQueryTest_Pathfinding();
};

