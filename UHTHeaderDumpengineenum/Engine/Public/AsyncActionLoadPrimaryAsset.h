#pragma once
#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetLoadedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionLoadPrimaryAsset.generated.h"

class UAsyncActionLoadPrimaryAsset;
class UObject;

UCLASS()
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryAssetLoaded Completed;
    
    UAsyncActionLoadPrimaryAsset();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
    
};

