#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "PhysicalSurfaceName.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalSurfaceName {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EPhysicalSurface> Type;
    
    UPROPERTY()
    FName Name;
    
    ENGINE_API FPhysicalSurfaceName();
};

