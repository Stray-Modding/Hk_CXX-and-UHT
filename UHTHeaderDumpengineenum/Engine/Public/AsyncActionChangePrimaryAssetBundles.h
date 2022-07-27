#pragma once
#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetBundlesChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionChangePrimaryAssetBundles.generated.h"

class UObject;
class UAsyncActionChangePrimaryAssetBundles;

UCLASS()
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryAssetBundlesChanged Completed;
    
    UAsyncActionChangePrimaryAssetBundles();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& AddBundles, const TArray<FName>& RemoveBundles);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, const TArray<FName>& NewBundles, const TArray<FName>& OldBundles);
    
};

