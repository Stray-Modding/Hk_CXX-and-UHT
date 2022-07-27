#pragma once
#include "CoreMinimal.h"
#include "ECollisionResponse.h"
#include "ResponseChannel.generated.h"

USTRUCT(BlueprintType)
struct FResponseChannel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Channel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> Response;
    
    ENGINE_API FResponseChannel();
};

