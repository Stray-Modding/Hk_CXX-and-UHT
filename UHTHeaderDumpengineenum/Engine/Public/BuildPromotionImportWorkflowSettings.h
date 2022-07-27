#pragma once
#include "CoreMinimal.h"
#include "EditorImportWorkflowDefinition.h"
#include "BuildPromotionImportWorkflowSettings.generated.h"

USTRUCT(BlueprintType)
struct FBuildPromotionImportWorkflowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition Diffuse;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition Normal;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition StaticMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition ReimportStaticMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition BlendShapeMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition MorphMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition SkeletalMesh;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition Animation;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition Sound;
    
    UPROPERTY(Config, EditAnywhere)
    FEditorImportWorkflowDefinition SurroundSound;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport;
    
    ENGINE_API FBuildPromotionImportWorkflowSettings();
};

