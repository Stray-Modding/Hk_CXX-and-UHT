#pragma once
#include "CoreMinimal.h"
#include "EAudioRecordingExportType.generated.h"

UENUM(BlueprintType)
enum class EAudioRecordingExportType : uint8 {
    SoundWave,
    WavFile,
};

