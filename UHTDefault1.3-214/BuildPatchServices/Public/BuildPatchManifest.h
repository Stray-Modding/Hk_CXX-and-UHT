#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FileManifestData.h"
#include "CustomFieldData.h"
#include "ChunkInfoData.h"
#include "BuildPatchManifest.generated.h"

UCLASS()
class UBuildPatchManifest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 ManifestFileVersion;
    
    UPROPERTY()
    bool bIsFileData;
    
    UPROPERTY()
    uint32 AppID;
    
    UPROPERTY()
    FString AppName;
    
    UPROPERTY()
    FString BuildVersion;
    
    UPROPERTY()
    FString LaunchExe;
    
    UPROPERTY()
    FString LaunchCommand;
    
    UPROPERTY()
    TSet<FString> PrereqIds;
    
    UPROPERTY()
    FString PrereqName;
    
    UPROPERTY()
    FString PrereqPath;
    
    UPROPERTY()
    FString PrereqArgs;
    
    UPROPERTY()
    TArray<FFileManifestData> FileManifestList;
    
    UPROPERTY()
    TArray<FChunkInfoData> ChunkList;
    
    UPROPERTY()
    TArray<FCustomFieldData> CustomFields;
    
    UBuildPatchManifest();
};

