#pragma once
#include "CoreMinimal.h"
#include "ECollisionChannel.h"
#include "ECollisionResponse.h"
#include "CustomChannelSetup.generated.h"

USTRUCT(BlueprintType)
struct FCustomChannelSetup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY()
    TEnumAsByte<ECollisionResponse> DefaultResponse;
    
    UPROPERTY()
    bool bTraceType;
    
    UPROPERTY()
    bool bStaticObject;
    
    UPROPERTY()
    FName Name;
    
    ENGINE_API FCustomChannelSetup();
};

