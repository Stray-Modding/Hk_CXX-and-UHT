#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetMapping.h"
#include "AssetMappingTable.generated.h"

UCLASS(MinimalAPI)
class UAssetMappingTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FAssetMapping> MappedAssets;
    
public:
    UAssetMappingTable();
};

