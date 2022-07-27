#pragma once
#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetClassListLoadedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionLoadPrimaryAssetClassList.generated.h"

class UAsyncActionLoadPrimaryAssetClassList;
class UObject;

UCLASS()
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryAssetClassListLoaded Completed;
    
    UAsyncActionLoadPrimaryAssetClassList();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
    
};

