#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetType.h"
#include "PrimaryAssetId.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FPrimaryAssetId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FPrimaryAssetType PrimaryAssetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName PrimaryAssetName;
    
    COREUOBJECT_API FPrimaryAssetId();
};

