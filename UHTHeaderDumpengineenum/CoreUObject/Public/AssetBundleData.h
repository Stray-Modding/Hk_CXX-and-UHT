#pragma once
#include "CoreMinimal.h"
#include "AssetBundleEntry.h"
#include "AssetBundleData.generated.h"

USTRUCT(NoExport)
struct COREUOBJECT_API FAssetBundleData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAssetBundleEntry> Bundles;
    
    FAssetBundleData();
};

