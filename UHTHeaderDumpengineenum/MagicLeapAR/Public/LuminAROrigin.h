#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=AROriginActor -FallbackName=AROriginActor
#include "LuminAROrigin.generated.h"

class UMRMeshComponent;
class UMaterialInterface;

UCLASS()
class ALuminAROrigin : public AAROriginActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UMRMeshComponent* MRMeshComponent;
    
    UPROPERTY()
    UMaterialInterface* PlaneSurfaceMaterial;
    
    UPROPERTY()
    UMaterialInterface* WireframeMaterial;
    
public:
    ALuminAROrigin();
};

