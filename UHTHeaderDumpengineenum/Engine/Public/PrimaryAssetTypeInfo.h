#pragma once
#include "CoreMinimal.h"
#include "DirectoryPath.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "PrimaryAssetRules.h"
#include "PrimaryAssetTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FPrimaryAssetTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PrimaryAssetType;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UObject> AssetBaseClass;
    
public:
    UPROPERTY(Transient)
    UClass* AssetBaseClassLoaded;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlueprintClasses;
    
    UPROPERTY(EditAnywhere)
    bool bIsEditorOnly;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FDirectoryPath> Directories;
    
    UPROPERTY(EditAnywhere)
    TArray<FSoftObjectPath> SpecificAssets;
    
public:
    UPROPERTY(EditAnywhere)
    FPrimaryAssetRules Rules;
    
    UPROPERTY(Transient)
    TArray<FString> AssetScanPaths;
    
    UPROPERTY(Transient)
    bool bIsDynamicAsset;
    
    UPROPERTY(Transient)
    int32 NumberOfAssets;
    
    ENGINE_API FPrimaryAssetTypeInfo();
};

