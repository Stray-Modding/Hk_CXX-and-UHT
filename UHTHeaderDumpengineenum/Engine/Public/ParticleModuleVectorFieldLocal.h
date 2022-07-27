#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ParticleModuleVectorFieldLocal.generated.h"

class UVectorField;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVectorField* VectorField;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeScale3D;
    
    UPROPERTY(EditAnywhere)
    float Intensity;
    
    UPROPERTY(EditAnywhere)
    float Tightness;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreComponentTransform: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileZ: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseFixDT: 1;
    
    UParticleModuleVectorFieldLocal();
};

