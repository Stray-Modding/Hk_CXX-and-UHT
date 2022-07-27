#pragma once
#include "CoreMinimal.h"
#include "ResponseChannel.h"
#include "CustomProfile.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCustomProfile {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FResponseChannel> CustomResponses;
    
    FCustomProfile();
};

