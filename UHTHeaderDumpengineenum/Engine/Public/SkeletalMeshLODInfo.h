#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshBuildSettings.h"
#include "PerPlatformFloat.h"
#include "SkeletalMeshOptimizationSettings.h"
#include "ESkinCacheUsage.h"
#include "BoneReference.h"
#include "SkeletalMeshLODInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSkeletalMeshLODInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat ScreenSize;
    
    UPROPERTY(EditAnywhere)
    float LODHysteresis;
    
    UPROPERTY()
    TArray<int32> LODMaterialMap;
    
    UPROPERTY(EditAnywhere)
    FSkeletalMeshBuildSettings BuildSettings;
    
    UPROPERTY(EditAnywhere)
    FSkeletalMeshOptimizationSettings ReductionSettings;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToRemove;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToPrioritize;
    
    UPROPERTY(EditAnywhere)
    float WeightOfPrioritization;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* BakePose;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* BakePoseOverride;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString SourceImportFilename;
    
    UPROPERTY(EditAnywhere)
    ESkinCacheUsage SkinCacheUsage;
    
    UPROPERTY()
    uint8 bHasBeenSimplified: 1;
    
    UPROPERTY()
    uint8 bHasPerLODVertexColors: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowCPUAccess: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSupportUniformlyDistributedSampling: 1;
    
    ENGINE_API FSkeletalMeshLODInfo();
};

