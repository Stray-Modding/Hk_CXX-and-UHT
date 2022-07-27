#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformInt -FallbackName=PerPlatformInt
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PerPlatformFloat -FallbackName=PerPlatformFloat
#include "EGrassScaling.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "GrassVariety.generated.h"

class UStaticMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGrassVariety {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* GrassMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat GrassDensity;
    
    UPROPERTY(EditAnywhere)
    bool bUseGrid;
    
    UPROPERTY(EditAnywhere)
    float PlacementJitter;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt StartCullDistance;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt EndCullDistance;
    
    UPROPERTY(EditAnywhere)
    int32 MinLOD;
    
    UPROPERTY(EditAnywhere)
    EGrassScaling Scaling;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    UPROPERTY(EditAnywhere)
    bool RandomRotation;
    
    UPROPERTY(EditAnywhere)
    bool AlignToSurface;
    
    UPROPERTY(EditAnywhere)
    bool bUseLandscapeLightmap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    bool bCastDynamicShadow;
    
    UPROPERTY(EditAnywhere)
    bool bKeepInstanceBufferCPUCopy;
    
    LANDSCAPE_API FGrassVariety();
};

