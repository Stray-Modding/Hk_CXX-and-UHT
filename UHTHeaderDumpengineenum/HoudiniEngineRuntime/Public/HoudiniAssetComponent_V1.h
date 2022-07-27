#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WalkableSlopeOverride -FallbackName=WalkableSlopeOverride
#include "HoudiniAssetComponent_V1.generated.h"

class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent {
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
    
    UPROPERTY(EditAnywhere)
    float GeneratedDistanceFieldResolutionScale;
    
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
    
    UPROPERTY()
    FText BakeFolder;
    
    UPROPERTY()
    FText TempCookFolder;
    
    UHoudiniAssetComponent_V1();
};

