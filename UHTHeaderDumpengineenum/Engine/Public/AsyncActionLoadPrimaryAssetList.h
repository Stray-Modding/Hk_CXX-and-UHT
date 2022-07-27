#pragma once
#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetListLoadedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionLoadPrimaryAssetList.generated.h"

class UAsyncActionLoadPrimaryAssetList;
class UObject;

UCLASS()
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryAssetListLoaded Completed;
    
    UAsyncActionLoadPrimaryAssetList();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
    
};

