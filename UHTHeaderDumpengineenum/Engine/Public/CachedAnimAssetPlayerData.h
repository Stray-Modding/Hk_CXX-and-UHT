#pragma once
#include "CoreMinimal.h"
#include "CachedAnimAssetPlayerData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimAssetPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StateName;
    
    FCachedAnimAssetPlayerData();
};

