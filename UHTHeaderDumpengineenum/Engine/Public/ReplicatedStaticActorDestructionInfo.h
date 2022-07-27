#pragma once
#include "CoreMinimal.h"
#include "ReplicatedStaticActorDestructionInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedStaticActorDestructionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* ObjClass;
    
    ENGINE_API FReplicatedStaticActorDestructionInfo();
};

