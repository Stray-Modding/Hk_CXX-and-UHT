#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "BuildPromotionOpenAssetSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionOpenAssetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFilePath BlueprintAsset;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath MaterialAsset;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath ParticleSystemAsset;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath SkeletalMeshAsset;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath StaticMeshAsset;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath TextureAsset;
    
    ENGINE_API FBuildPromotionOpenAssetSettings();
};

