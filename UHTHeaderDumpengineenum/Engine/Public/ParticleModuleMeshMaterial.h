#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleMaterialBase.h"
#include "ParticleModuleMeshMaterial.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> MeshMaterials;
    
    UParticleModuleMeshMaterial();
};

