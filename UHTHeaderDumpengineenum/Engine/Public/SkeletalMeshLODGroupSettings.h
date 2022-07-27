#pragma once
#include "CoreMinimal.h"
#include "PerPlatformFloat.h"
#include "EBoneFilterActionOption.h"
#include "BoneFilter.h"
#include "SkeletalMeshOptimizationSettings.h"
#include "SkeletalMeshLODGroupSettings.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FSkeletalMeshLODGroupSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat ScreenSize;
    
    UPROPERTY(EditAnywhere)
    float LODHysteresis;
    
    UPROPERTY(EditAnywhere)
    EBoneFilterActionOption BoneFilterActionOption;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneFilter> BoneList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BonesToPrioritize;
    
    UPROPERTY(EditAnywhere)
    float WeightOfPrioritization;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* BakePose;
    
    UPROPERTY(EditAnywhere)
    FSkeletalMeshOptimizationSettings ReductionSettings;
    
    ENGINE_API FSkeletalMeshLODGroupSettings();
};

