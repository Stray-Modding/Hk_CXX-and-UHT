#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=AssetData -FallbackName=AssetData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ARFilter -FallbackName=ARFilter
#include "TagAndValue.h"
#include "AssetRegistryHelpers.generated.h"

class UAssetRegistry;
class IAssetRegistry;

UCLASS(BlueprintType, Transient)
class UAssetRegistryHelpers : public UObject {
    GENERATED_BODY()
public:
    UAssetRegistryHelpers();
    UFUNCTION(BlueprintPure)
    static FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static bool IsUAsset(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static bool IsRedirector(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static bool IsAssetLoaded(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);
    
    UFUNCTION(BlueprintPure)
    static FString GetFullName(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static FString GetExportTextName(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static UClass* GetClass(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static TScriptInterface<IAssetRegistry> GetAssetRegistry();
    
    UFUNCTION(BlueprintPure)
    static UObject* GetAsset(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintPure)
    static FAssetData CreateAssetData(const UObject* InAsset, bool bAllowBlueprintClass);
    
};

