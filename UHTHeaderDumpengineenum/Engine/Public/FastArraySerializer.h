#pragma once
#include "CoreMinimal.h"
#include "EFastArraySerializerDeltaFlags.h"
#include "FastArraySerializer.generated.h"

USTRUCT()
struct FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(NotReplicated)
    int32 ArrayReplicationKey;
    
private:
    UPROPERTY(NotReplicated, Transient)
    EFastArraySerializerDeltaFlags DeltaFlags;
    
public:
    ENGINE_API FFastArraySerializer();
};

