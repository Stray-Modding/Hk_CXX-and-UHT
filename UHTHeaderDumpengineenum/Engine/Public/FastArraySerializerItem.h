#pragma once
#include "CoreMinimal.h"
#include "FastArraySerializerItem.generated.h"

USTRUCT()
struct FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(NotReplicated)
    int32 ReplicationID;
    
    UPROPERTY(NotReplicated)
    int32 ReplicationKey;
    
    UPROPERTY(NotReplicated)
    int32 MostRecentArrayReplicationKey;
    
    ENGINE_API FFastArraySerializerItem();
};

