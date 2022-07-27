#pragma once
#include "CoreMinimal.h"
#include "SoundBase.h"
#include "ESoundGroup.h"
#include "SoundModulationDefaultRoutingSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioPlatformConfiguration -ObjectName=ESoundwaveSampleRateSettings -FallbackName=ESoundwaveSampleRateSettings
#include "SoundWaveEnvelopeTimeData.h"
#include "ESoundWaveLoadingBehavior.h"
#include "SoundWaveSpectralTimeData.h"
#include "SubtitleCue.h"
#include "SoundWave.generated.h"

class UCurveTable;

UCLASS(EditInlineNew)
class ENGINE_API USoundWave : public USoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    int32 CompressionQuality;
    
    UPROPERTY(EditAnywhere)
    int32 StreamingPriority;
    
    UPROPERTY(EditAnywhere)
    ESoundwaveSampleRateSettings SampleRateQuality;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESoundGroup> SoundGroup;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    uint8 bLooping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStreaming: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSeekableStreaming: 1;
    
    UPROPERTY(EditAnywhere)
    ESoundWaveLoadingBehavior LoadingBehavior;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bMature: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bManualWordWrap: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSingleLine: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsAmbisonics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDefaultRoutingSettings ModulationSettings;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FrequenciesToAnalyze;
    
    UPROPERTY()
    TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData;
    
    UPROPERTY()
    TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 InitialChunkSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SpokenText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SubtitlePriority;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(EditAnywhere)
    float Pitch;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    int32 NumChannels;
    
protected:
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    int32 SampleRate;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSubtitleCue> Subtitles;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UCurveTable* Curves;
    
    UPROPERTY()
    UCurveTable* InternalCurves;
    
public:
    USoundWave();
};

