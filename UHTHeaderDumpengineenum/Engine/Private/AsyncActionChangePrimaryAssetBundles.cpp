#include "AsyncActionChangePrimaryAssetBundles.h"

class UAsyncActionChangePrimaryAssetBundles;
class UObject;

UAsyncActionChangePrimaryAssetBundles* UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& AddBundles, const TArray<FName>& RemoveBundles) {
    return NULL;
}

UAsyncActionChangePrimaryAssetBundles* UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, const TArray<FName>& NewBundles, const TArray<FName>& OldBundles) {
    return NULL;
}

UAsyncActionChangePrimaryAssetBundles::UAsyncActionChangePrimaryAssetBundles() {
}

