#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetType.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FPrimaryAssetType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName Name;
    
    COREUOBJECT_API FPrimaryAssetType();
};

