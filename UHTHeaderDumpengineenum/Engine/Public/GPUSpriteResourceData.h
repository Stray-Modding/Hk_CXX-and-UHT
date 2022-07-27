#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EParticleScreenAlignment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EParticleAxisLock.h"
#include "GPUSpriteResourceData.generated.h"

USTRUCT(BlueprintType)
struct FGPUSpriteResourceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FColor> QuantizedColorSamples;
    
    UPROPERTY()
    TArray<FColor> QuantizedMiscSamples;
    
    UPROPERTY()
    TArray<FColor> QuantizedSimulationAttrSamples;
    
    UPROPERTY()
    FVector4 ColorScale;
    
    UPROPERTY()
    FVector4 ColorBias;
    
    UPROPERTY()
    FVector4 MiscScale;
    
    UPROPERTY()
    FVector4 MiscBias;
    
    UPROPERTY()
    FVector4 SimulationAttrCurveScale;
    
    UPROPERTY()
    FVector4 SimulationAttrCurveBias;
    
    UPROPERTY()
    FVector4 SubImageSize;
    
    UPROPERTY()
    FVector4 SizeBySpeed;
    
    UPROPERTY()
    FVector ConstantAcceleration;
    
    UPROPERTY()
    FVector OrbitOffsetBase;
    
    UPROPERTY()
    FVector OrbitOffsetRange;
    
    UPROPERTY()
    FVector OrbitFrequencyBase;
    
    UPROPERTY()
    FVector OrbitFrequencyRange;
    
    UPROPERTY()
    FVector OrbitPhaseBase;
    
    UPROPERTY()
    FVector OrbitPhaseRange;
    
    UPROPERTY()
    float GlobalVectorFieldScale;
    
    UPROPERTY()
    float GlobalVectorFieldTightness;
    
    UPROPERTY()
    float PerParticleVectorFieldScale;
    
    UPROPERTY()
    float PerParticleVectorFieldBias;
    
    UPROPERTY()
    float DragCoefficientScale;
    
    UPROPERTY()
    float DragCoefficientBias;
    
    UPROPERTY()
    float ResilienceScale;
    
    UPROPERTY()
    float ResilienceBias;
    
    UPROPERTY()
    float CollisionRadiusScale;
    
    UPROPERTY()
    float CollisionRadiusBias;
    
    UPROPERTY()
    float CollisionTimeBias;
    
    UPROPERTY()
    float CollisionRandomSpread;
    
    UPROPERTY()
    float CollisionRandomDistribution;
    
    UPROPERTY()
    float OneMinusFriction;
    
    UPROPERTY()
    float RotationRateScale;
    
    UPROPERTY()
    float CameraMotionBlurAmount;
    
    UPROPERTY()
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    
    UPROPERTY()
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    
    UPROPERTY()
    FVector2D PivotOffset;
    
    UPROPERTY()
    uint8 bRemoveHMDRoll: 1;
    
    UPROPERTY()
    float MinFacingCameraBlendDistance;
    
    UPROPERTY()
    float MaxFacingCameraBlendDistance;
    
    ENGINE_API FGPUSpriteResourceData();
};

