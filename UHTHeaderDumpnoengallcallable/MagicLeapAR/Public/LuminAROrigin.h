#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AugmentedReality -ObjectName=AROriginActor -FallbackName=AROriginActor
#include "LuminAROrigin.generated.h"

class UMRMeshComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class ALuminAROrigin : public AAROriginActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMRMeshComponent* MRMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PlaneSurfaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WireframeMaterial;
    
public:
    ALuminAROrigin();
};

