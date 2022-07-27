#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WalkableSlopeOverride -FallbackName=WalkableSlopeOverride
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "HoudiniStaticMeshGenerationProperties.generated.h"

class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniStaticMeshGenerationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bGeneratedDoubleSidedGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* GeneratedPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance DefaultBodyInstance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratedLightMapResolution;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 GeneratedLightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGeneratedUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GeneratedStreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> GeneratedAssetUserData;
    
    FHoudiniStaticMeshGenerationProperties();
};

