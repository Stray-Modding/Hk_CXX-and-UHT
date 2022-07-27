#pragma once
#include "CoreMinimal.h"
#include "ESyncOption.h"
#include "ComponentSync.generated.h"

USTRUCT(BlueprintType)
struct FComponentSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESyncOption SyncOption;
    
    ENGINE_API FComponentSync();
};

