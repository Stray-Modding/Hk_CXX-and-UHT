#pragma once
#include "CoreMinimal.h"
#include "AudioQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAudioQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    int32 MaxChannels;
    
    FAudioQualitySettings();
};

