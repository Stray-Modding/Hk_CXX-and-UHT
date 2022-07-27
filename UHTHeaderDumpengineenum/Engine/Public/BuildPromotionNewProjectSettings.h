#pragma once
#include "CoreMinimal.h"
#include "DirectoryPath.h"
#include "BuildPromotionNewProjectSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionNewProjectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDirectoryPath NewProjectFolderOverride;
    
    UPROPERTY(EditAnywhere)
    FString NewProjectNameOverride;
    
    ENGINE_API FBuildPromotionNewProjectSettings();
};

