#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Exporter.generated.h"

class UAssetExportTask;

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UExporter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UClass* SupportedClass;
    
    UPROPERTY(Transient)
    UObject* ExportRootScope;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> FormatExtension;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> FormatDescription;
    
    UPROPERTY()
    int32 PreferredFormatIndex;
    
    UPROPERTY()
    int32 TextIndent;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bText: 1;
    
    UPROPERTY()
    uint8 bSelectedOnly: 1;
    
    UPROPERTY()
    uint8 bForceFileOperations: 1;
    
    UPROPERTY(BlueprintReadWrite)
    UAssetExportTask* ExportTask;
    
    UExporter();
    UFUNCTION(BlueprintImplementableEvent)
    bool ScriptRunAssetExportTask(UAssetExportTask* Task);
    
    UFUNCTION(BlueprintCallable)
    static bool RunAssetExportTasks(const TArray<UAssetExportTask*>& ExportTasks);
    
    UFUNCTION(BlueprintCallable)
    static bool RunAssetExportTask(UAssetExportTask* Task);
    
};

