#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "BuildPromotionImportWorkflowSettings.h"
#include "BuildPromotionOpenAssetSettings.h"
#include "BuildPromotionNewProjectSettings.h"
#include "BuildPromotionTestSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionTestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilePath DefaultStaticMeshAsset;
    
    UPROPERTY(EditAnywhere)
    FBuildPromotionImportWorkflowSettings ImportWorkflow;
    
    UPROPERTY(EditAnywhere)
    FBuildPromotionOpenAssetSettings OpenAssets;
    
    UPROPERTY(EditAnywhere)
    FBuildPromotionNewProjectSettings NewProjectSettings;
    
    UPROPERTY(EditAnywhere)
    FFilePath SourceControlMaterial;
    
    ENGINE_API FBuildPromotionTestSettings();
};

