#pragma once
#include "CoreMinimal.h"
#include "MeshBuildSettings.h"
#include "PerPlatformFloat.h"
#include "MeshReductionSettings.h"
#include "StaticMeshSourceModel.generated.h"

USTRUCT()
struct FStaticMeshSourceModel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMeshBuildSettings BuildSettings;
    
    UPROPERTY(EditAnywhere)
    FMeshReductionSettings ReductionSettings;
    
    UPROPERTY()
    float LODDistance;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformFloat ScreenSize;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString SourceImportFilename;
    
    ENGINE_API FStaticMeshSourceModel();
};

