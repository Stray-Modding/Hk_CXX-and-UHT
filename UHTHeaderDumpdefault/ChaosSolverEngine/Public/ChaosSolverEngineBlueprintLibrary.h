#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ChaosPhysicsCollisionInfo.h"
#include "ChaosSolverEngineBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class CHAOSSOLVERENGINE_API UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChaosSolverEngineBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
    
};

