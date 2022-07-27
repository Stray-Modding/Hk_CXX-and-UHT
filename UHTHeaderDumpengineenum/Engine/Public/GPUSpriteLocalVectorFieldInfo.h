#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "GPUSpriteLocalVectorFieldInfo.generated.h"

class UVectorField;

USTRUCT(BlueprintType)
struct FGPUSpriteLocalVectorFieldInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UVectorField* Field;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FRotator MinInitialRotation;
    
    UPROPERTY()
    FRotator MaxInitialRotation;
    
    UPROPERTY()
    FRotator RotationRate;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    float Tightness;
    
    UPROPERTY()
    uint8 bIgnoreComponentTransform: 1;
    
    UPROPERTY()
    uint8 bTileX: 1;
    
    UPROPERTY()
    uint8 bTileY: 1;
    
    UPROPERTY()
    uint8 bTileZ: 1;
    
    UPROPERTY()
    uint8 bUseFixDT: 1;
    
    ENGINE_API FGPUSpriteLocalVectorFieldInfo();
};

