#ifndef UE4SS_SDK_ApexDestruction_HPP
#define UE4SS_SDK_ApexDestruction_HPP

#include "ApexDestruction_enums.hpp"

class ADestructibleActor : public AActor
{
    class UDestructibleComponent* DestructibleComponent;
    FDestructibleActorOnActorFracture OnActorFracture;
    void ActorFractureSignature(const FVector& HitPoint, const FVector& HitDirection);

};

class UDestructibleComponent : public USkinnedMeshComponent
{
    uint8 bFractureEffectOverride;
    TArray<FFractureEffect> FractureEffects;
    bool bEnableHardSleeping;
    float LargeChunkThreshold;
    FDestructibleComponentOnComponentFracture OnComponentFracture;
    void ComponentFractureSignature(const FVector& HitPoint, const FVector& HitDirection);

    void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
    class UDestructibleMesh* GetDestructibleMesh();
    void ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    void ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
};

struct FFractureMaterial
{
    FVector2D UVScale;
    FVector2D UVOffset;
    FVector Tangent;
    float UAngle;
    int32 InteriorElementIndex;

};

struct FDestructibleChunkParameters
{
    bool bIsSupportChunk;
    bool bDoNotFracture;
    bool bDoNotDamage;
    bool bDoNotCrumble;

};

class UDestructibleFractureSettings : public UObject
{
    int32 CellSiteCount;
    FFractureMaterial FractureMaterialDesc;
    int32 RandomSeed;
    TArray<FVector> VoronoiSites;
    int32 OriginalSubmeshCount;
    TArray<class UMaterialInterface*> Materials;
    TArray<FDestructibleChunkParameters> ChunkParameters;

};

struct FDestructibleDamageParameters
{
    float DamageThreshold;
    float DamageSpread;
    bool bEnableImpactDamage;
    float ImpactDamage;
    int32 DefaultImpactDamageDepth;
    bool bCustomImpactResistance;
    float ImpactResistance;

};

struct FDestructibleDebrisParameters
{
    float DebrisLifetimeMin;
    float DebrisLifetimeMax;
    float DebrisMaxSeparationMin;
    float DebrisMaxSeparationMax;
    FBox ValidBounds;

};

struct FDestructibleAdvancedParameters
{
    float DamageCap;
    float ImpactVelocityThreshold;
    float MaxChunkSpeed;
    float FractureImpulseScale;

};

struct FDestructibleSpecialHierarchyDepths
{
    int32 SupportDepth;
    int32 MinimumFractureDepth;
    bool bEnableDebris;
    int32 DebrisDepth;
    int32 EssentialDepth;

};

struct FDestructibleDepthParameters
{
    TEnumAsByte<EImpactDamageOverride> ImpactDamageOverride;

};

struct FDestructibleParametersFlag
{
    uint8 bAccumulateDamage;
    uint8 bAssetDefinedSupport;
    uint8 bWorldSupport;
    uint8 bDebrisTimeout;
    uint8 bDebrisMaxSeparation;
    uint8 bCrumbleSmallestChunks;
    uint8 bAccurateRaycasts;
    uint8 bUseValidBounds;
    uint8 bFormExtendedStructures;

};

struct FDestructibleParameters
{
    FDestructibleDamageParameters DamageParameters;
    FDestructibleDebrisParameters DebrisParameters;
    FDestructibleAdvancedParameters AdvancedParameters;
    FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths;
    TArray<FDestructibleDepthParameters> DepthParameters;
    FDestructibleParametersFlag Flags;

};

class UDestructibleMesh : public USkeletalMesh
{
    FDestructibleParameters DefaultDestructibleParameters;
    TArray<FFractureEffect> FractureEffects;

};

#endif
