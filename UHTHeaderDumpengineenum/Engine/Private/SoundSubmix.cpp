#include "SoundSubmix.h"

class UObject;
class USoundWave;

void USoundSubmix::StopSpectralAnalysis(const UObject* WorldContextObject) {
}

void USoundSubmix::StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, const FString& Name, const FString& Path, USoundWave* ExistingSoundWaveToOverwrite) {
}

void USoundSubmix::StopEnvelopeFollowing(const UObject* WorldContextObject) {
}

void USoundSubmix::StartSpectralAnalysis(const UObject* WorldContextObject, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType) {
}

void USoundSubmix::StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration) {
}

void USoundSubmix::StartEnvelopeFollowing(const UObject* WorldContextObject) {
}

void USoundSubmix::SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume) {
}

void USoundSubmix::RemoveSpectralAnalysisDelegate(const UObject* WorldContextObject, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP) {
}

void USoundSubmix::AddSpectralAnalysisDelegate(const UObject* WorldContextObject, const TArray<FSoundSubmixSpectralAnalysisBandSettings>& InBandSettings, const FOnSubmixSpectralAnalysisBP& OnSubmixSpectralAnalysisBP, float UpdateRate, float DecibelNoiseFloor, bool bDoNormalize, bool bDoAutoRange, float AutoRangeAttackTime, float AutoRangeReleaseTime) {
}

void USoundSubmix::AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const FOnSubmixEnvelopeBP& OnSubmixEnvelopeBP) {
}

USoundSubmix::USoundSubmix() {
    this->bMuteWhenBackgrounded = false;
    this->AmbisonicsPluginSettings = NULL;
    this->EnvelopeFollowerAttackTime = 10;
    this->EnvelopeFollowerReleaseTime = 500;
    this->GainMode = EGainParamMode::Linear;
    this->OutputVolume = 1.00f;
    this->WetLevel = 1.00f;
    this->DryLevel = 0.00f;
}

