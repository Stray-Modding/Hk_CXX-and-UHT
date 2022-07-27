#pragma once
#include "CoreMinimal.h"
#include "EGainParamMode.h"
#include "OnSubmixEnvelopeBPDelegate.h"
#include "SoundSubmixWithParentBase.h"
#include "OnSubmixRecordedFileDoneDelegate.h"
#include "EAudioRecordingExportType.h"
#include "SoundModulationDestinationSettings.h"
#include "EFFTSize.h"
#include "EAudioSpectrumType.h"
#include "EFFTPeakInterpolationMethod.h"
#include "EFFTWindowType.h"
#include "OnSubmixSpectralAnalysisBPDelegate.h"
#include "SoundSubmixSpectralAnalysisBandSettings.h"
#include "SoundSubmix.generated.h"

class UObject;
class USoundEffectSubmixPreset;
class USoundfieldEncodingSettingsBase;
class USoundWave;

UCLASS(EditInlineNew)
class ENGINE_API USoundSubmix : public USoundSubmixWithParentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bMuteWhenBackgrounded: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EnvelopeFollowerReleaseTime;
    
    UPROPERTY(EditAnywhere)
    EGainParamMode GainMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutputVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings OutputVolumeModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings WetLevelModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings DryLevelModulation;
    
    UPROPERTY(BlueprintAssignable)
    FOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    
    USoundSubmix();
    UFUNCTION(BlueprintCallable)
    void StopSpectralAnalysis(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void StopEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void StartSpectralAnalysis(const UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    
    UFUNCTION(BlueprintCallable)
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration);
    
    UFUNCTION(BlueprintCallable)
    void StartEnvelopeFollowing(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpectralAnalysisDelegate(const UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP);
    
    UFUNCTION(BlueprintCallable)
    void AddSpectralAnalysisDelegate(const UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime);
    
    UFUNCTION(BlueprintCallable)
    void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP);
    
};

