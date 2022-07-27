#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GPUSpriteLocalVectorFieldInfo.h"
#include "FloatDistribution.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EParticleScreenAlignment.h"
#include "EParticleAxisLock.h"
#include "EParticleCollisionMode.h"
#include "RawDistributionVector.h"
#include "RawDistributionFloat.h"
#include "GPUSpriteEmitterInfo.generated.h"

class UParticleModuleSpawnPerUnit;
class UParticleModuleRequired;
class UParticleModuleSpawn;
class UParticleModule;

USTRUCT(BlueprintType)
struct FGPUSpriteEmitterInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleModuleRequired* RequiredModule;
    
    UPROPERTY()
    UParticleModuleSpawn* SpawnModule;
    
    UPROPERTY()
    UParticleModuleSpawnPerUnit* SpawnPerUnitModule;
    
    UPROPERTY()
    TArray<UParticleModule*> SpawnModules;
    
    UPROPERTY()
    FGPUSpriteLocalVectorFieldInfo LocalVectorField;
    
    UPROPERTY()
    FFloatDistribution VectorFieldScale;
    
    UPROPERTY()
    FFloatDistribution DragCoefficient;
    
    UPROPERTY()
    FFloatDistribution PointAttractorStrength;
    
    UPROPERTY()
    FFloatDistribution Resilience;
    
    UPROPERTY()
    FVector ConstantAcceleration;
    
    UPROPERTY()
    FVector PointAttractorPosition;
    
    UPROPERTY()
    float PointAttractorRadiusSq;
    
    UPROPERTY()
    FVector OrbitOffsetBase;
    
    UPROPERTY()
    FVector OrbitOffsetRange;
    
    UPROPERTY()
    FVector2D InvMaxSize;
    
    UPROPERTY()
    float InvRotationRateScale;
    
    UPROPERTY()
    float MaxLifetime;
    
    UPROPERTY()
    int32 MaxParticleCount;
    
    UPROPERTY()
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    
    UPROPERTY()
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    
    UPROPERTY()
    uint8 bEnableCollision: 1;
    
    UPROPERTY()
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;
    
    UPROPERTY()
    uint8 bRemoveHMDRoll: 1;
    
    UPROPERTY()
    float MinFacingCameraBlendDistance;
    
    UPROPERTY()
    float MaxFacingCameraBlendDistance;
    
    UPROPERTY()
    FRawDistributionVector DynamicColor;
    
    UPROPERTY()
    FRawDistributionFloat DynamicAlpha;
    
    UPROPERTY()
    FRawDistributionVector DynamicColorScale;
    
    UPROPERTY()
    FRawDistributionFloat DynamicAlphaScale;
    
    ENGINE_API FGPUSpriteEmitterInfo();
};

