#pragma once
#include "CoreMinimal.h"
#include "WalkableSlopeOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=BodySetupCore -FallbackName=BodySetupCore
#include "KAggregateGeom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BodyInstance.h"
#include "BodySetup.generated.h"

class UPhysicalMaterial;

UCLASS(CollapseCategories, MinimalAPI)
class UBodySetup : public UBodySetupCore {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKAggregateGeom AggGeom;
    
    UPROPERTY()
    uint8 bAlwaysFullAnimWeight: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bConsiderForBounds: 1;
    
    UPROPERTY(Transient)
    uint8 bMeshCollideAll: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDoubleSidedGeometry: 1;
    
    UPROPERTY()
    uint8 bGenerateNonMirroredCollision: 1;
    
    UPROPERTY()
    uint8 bSharedCookedData: 1;
    
    UPROPERTY()
    uint8 bGenerateMirroredCollision: 1;
    
    UPROPERTY()
    uint8 bSupportUVsAndFaceRemap: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FWalkableSlopeOverride WalkableSlopeOverride;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance DefaultInstance;
    
    UPROPERTY()
    FVector BuildScale3D;
    
    UBodySetup();
};

