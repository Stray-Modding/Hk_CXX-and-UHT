#pragma once
#include "CoreMinimal.h"
#include "EAudioVolumeLocationState.h"
#include "SoundSubmixSendInfo.h"
#include "AudioVolumeSubmixSendSettings.generated.h"

USTRUCT(BlueprintType)
struct FAudioVolumeSubmixSendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAudioVolumeLocationState ListenerLocationState;
    
    UPROPERTY()
    EAudioVolumeLocationState SourceLocationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSubmixSendInfo> SubmixSends;
    
    ENGINE_API FAudioVolumeSubmixSendSettings();
};

