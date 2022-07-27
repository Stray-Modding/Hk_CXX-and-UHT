#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WalkableSlopeOverride -FallbackName=WalkableSlopeOverride
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BodyInstance -FallbackName=BodyInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "HoudiniAssetComponent_V1.generated.h"

class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGeneratedDoubleSidedGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* GeneratedPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyInstance DefaultBodyInstance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratedLightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneratedDistanceFieldResolutionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratedLightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGeneratedUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GeneratedStreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> GeneratedAssetUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BakeFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TempCookFolder;
    
    UHoudiniAssetComponent_V1();
};

