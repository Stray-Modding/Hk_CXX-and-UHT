#pragma once
#include "CoreMinimal.h"
#include "DestructibleChunkParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleChunkParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsSupportChunk;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotFracture;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotDamage;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotCrumble;
    
    APEXDESTRUCTION_API FDestructibleChunkParameters();
};

