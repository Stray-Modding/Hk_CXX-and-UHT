#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "DirectoryPath.h"
#include "ExternalToolDefinition.generated.h"

USTRUCT(BlueprintType)
struct FExternalToolDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString ToolName;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath ExecutablePath;
    
    UPROPERTY(Config, EditAnywhere)
    FString CommandLineOptions;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WorkingDirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString ScriptExtension;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath ScriptDirectory;
    
    ENGINE_API FExternalToolDefinition();
};

