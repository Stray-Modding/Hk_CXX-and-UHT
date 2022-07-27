#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DefaultAudioBusSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FDefaultAudioBusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AudioBus;
    
    FDefaultAudioBusSettings();
};

