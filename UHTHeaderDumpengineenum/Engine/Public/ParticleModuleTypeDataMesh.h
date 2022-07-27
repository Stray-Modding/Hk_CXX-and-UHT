#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleTypeDataBase.h"
#include "EMeshScreenAlignment.h"
#include "EMeshCameraFacingOptions.h"
#include "EMeshCameraFacingUpAxis.h"
#include "RawDistributionVector.h"
#include "EParticleAxisLock.h"
#include "ParticleModuleTypeDataMesh.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    float LODSizeScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseStaticMeshLODs: 1;
    
    UPROPERTY()
    uint8 CastShadows: 1;
    
    UPROPERTY()
    uint8 DoCollisions: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMeshScreenAlignment> MeshAlignment;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMaterial: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDefaultMotionBlurSettings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableMotionBlur: 1;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector RollPitchYawRange;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EParticleAxisLock> AxisLockOption;
    
    UPROPERTY(EditAnywhere)
    uint8 bCameraFacing: 1;
    
    UPROPERTY()
    TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyParticleRotationAsSpin: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFaceCameraDirectionRatherThanPosition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCollisionsConsiderPartilceSize: 1;
    
    UParticleModuleTypeDataMesh();
};

