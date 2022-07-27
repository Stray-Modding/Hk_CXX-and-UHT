#pragma once
#include "CoreMinimal.h"
#include "FilePath.h"
#include "LaunchOnTestSettings.generated.h"

USTRUCT(BlueprintType)
struct FLaunchOnTestSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FFilePath LaunchOnTestmap;
    
    UPROPERTY(Config, EditAnywhere)
    FString DeviceID;
    
    ENGINE_API FLaunchOnTestSettings();
};

