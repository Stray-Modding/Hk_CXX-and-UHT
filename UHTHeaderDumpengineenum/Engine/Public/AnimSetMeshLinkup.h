#pragma once
#include "CoreMinimal.h"
#include "AnimSetMeshLinkup.generated.h"

USTRUCT(BlueprintType)
struct FAnimSetMeshLinkup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> BoneToTrackTable;
    
    ENGINE_API FAnimSetMeshLinkup();
};

