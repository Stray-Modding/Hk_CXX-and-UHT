#pragma once
#include "CoreMinimal.h"
#include "CollisionResponseContainer.h"
#include "ResponseChannel.h"
#include "CollisionResponse.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCollisionResponse {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FCollisionResponseContainer ResponseToChannels;
    
    UPROPERTY(EditAnywhere)
    TArray<FResponseChannel> ResponseArray;
    
public:
    FCollisionResponse();
};

