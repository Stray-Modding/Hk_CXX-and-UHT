#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetExportTask.generated.h"

class UExporter;

UCLASS(BlueprintType, Transient)
class ENGINE_API UAssetExportTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite)
    UExporter* Exporter;
    
    UPROPERTY(BlueprintReadWrite)
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite)
    bool bReplaceIdentical;
    
    UPROPERTY(BlueprintReadWrite)
    bool bPrompt;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAutomated;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseFileArchive;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWriteEmptyFiles;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UObject*> IgnoreObjectList;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* Options;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> Errors;
    
    UAssetExportTask();
};

