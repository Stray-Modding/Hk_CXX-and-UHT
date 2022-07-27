#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "ImportFactorySettingValues.h"
#include "EditorImportExportTestDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorImportExportTestDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFilePath ImportFilePath;
    
    UPROPERTY(Config, EditAnywhere)
    FString ExportFileExtension;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSkipExport;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FImportFactorySettingValues> FactorySettings;
    
    ENGINE_API FEditorImportExportTestDefinition();
};

