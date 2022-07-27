#pragma once
#include "CoreMinimal.h"
#include "AsyncActionLoadPrimaryAssetBase.h"
#include "OnPrimaryAssetClassLoadedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PrimaryAssetId -FallbackName=PrimaryAssetId
#include "AsyncActionLoadPrimaryAssetClass.generated.h"

class UAsyncActionLoadPrimaryAssetClass;
class UObject;

UCLASS()
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPrimaryAssetClassLoaded Completed;
    
    UAsyncActionLoadPrimaryAssetClass();
    UFUNCTION(BlueprintCallable)
    static UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
    
};

