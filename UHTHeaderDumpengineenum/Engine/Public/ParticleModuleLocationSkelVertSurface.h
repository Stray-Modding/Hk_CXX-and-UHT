#pragma once
#include "CoreMinimal.h"
#include "ParticleModuleLocationBase.h"
#include "ELocationSkelVertSurfaceSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ParticleModuleLocationSkelVertSurface.generated.h"

UCLASS(EditInlineNew)
class ENGINE_API UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType;
    
    UPROPERTY(EditAnywhere)
    FVector UniversalOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdatePositionEachFrame: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOrientMeshEmitters: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritBoneVelocity: 1;
    
    UPROPERTY(EditAnywhere)
    float InheritVelocityScale;
    
    UPROPERTY(EditAnywhere)
    FName SkelMeshActorParamName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidAssociatedBones;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnforceNormalCheck: 1;
    
    UPROPERTY(EditAnywhere)
    FVector NormalToCompare;
    
    UPROPERTY(EditAnywhere)
    float NormalCheckToleranceDegrees;
    
    UPROPERTY()
    float NormalCheckTolerance;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ValidMaterialIndices;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritVertexColor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritUV: 1;
    
    UPROPERTY(EditAnywhere)
    uint32 InheritUVChannel;
    
    UParticleModuleLocationSkelVertSurface();
};

