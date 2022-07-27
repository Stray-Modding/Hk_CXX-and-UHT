#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ImportFactorySettingValues.h"
#include "EditorImportWorkflowDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorImportWorkflowDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFilePath ImportFilePath;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FImportFactorySettingValues> FactorySettings;
    
    ENGINE_API FEditorImportWorkflowDefinition();
};

