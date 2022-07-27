#pragma once
#include "CoreMinimal.h"
#include "NameMapping.h"
#include "RigConfiguration.generated.h"

class URig;

USTRUCT()
struct FRigConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY()
    URig* Rig;
    
    UPROPERTY()
    TArray<FNameMapping> BoneMappingTable;
    
    ENGINE_API FRigConfiguration();
};

