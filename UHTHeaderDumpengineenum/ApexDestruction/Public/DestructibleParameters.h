#pragma once
#include "CoreMinimal.h"
#include "DestructibleDamageParameters.h"
#include "DestructibleDebrisParameters.h"
#include "DestructibleAdvancedParameters.h"
#include "DestructibleDepthParameters.h"
#include "DestructibleSpecialHierarchyDepths.h"
#include "DestructibleParametersFlag.h"
#include "DestructibleParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDestructibleDamageParameters DamageParameters;
    
    UPROPERTY(EditAnywhere)
    FDestructibleDebrisParameters DebrisParameters;
    
    UPROPERTY(EditAnywhere)
    FDestructibleAdvancedParameters AdvancedParameters;
    
    UPROPERTY(EditAnywhere)
    FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDestructibleDepthParameters> DepthParameters;
    
    UPROPERTY(EditAnywhere)
    FDestructibleParametersFlag Flags;
    
    APEXDESTRUCTION_API FDestructibleParameters();
};

