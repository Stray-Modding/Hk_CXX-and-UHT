#ifndef UE4SS_SDK_MotoSynth_HPP
#define UE4SS_SDK_MotoSynth_HPP

struct FMotoSynthRuntimeSettings
{
    bool bSynthToneEnabled;
    float SynthToneVolume;
    float SynthToneFilterFrequency;
    int32 SynthOctaveShift;
    bool bGranularEngineEnabled;
    float GranularEngineVolume;
    float GranularEnginePitchScale;
    int32 NumSamplesToCrossfadeBetweenGrains;
    int32 NumGrainTableEntriesPerGrain;
    int32 GrainTableRandomOffsetForConstantRPMs;
    int32 GrainCrossfadeSamplesForConstantRPMs;
    class UMotoSynthSource* AccelerationSource;
    class UMotoSynthSource* DecelerationSource;
    bool bStereoWidenerEnabled;
    float StereoDelayMsec;
    float StereoFeedback;
    float StereoWidenerWetlevel;
    float StereoWidenerDryLevel;
    float StereoWidenerDelayRatio;
    bool bStereoWidenerFilterEnabled;
    float StereoWidenerFilterFrequency;
    float StereoWidenerFilterQ;

};

class UMotoSynthPreset : public UObject
{
    FMotoSynthRuntimeSettings Settings;

};

struct FGrainTableEntry
{
    int32 SampleIndex;
    float RPM;

};

class UMotoSynthSource : public UObject
{
    bool bConvertTo8Bit;
    float DownSampleFactor;
    FRuntimeFloatCurve RPMCurve;
    TArray<float> SourceData;
    TArray<int16> SourceDataPCM;
    int32 SourceSampleRate;
    TArray<FGrainTableEntry> GrainTable;

};

class USynthComponentMoto : public USynthComponent
{
    class UMotoSynthPreset* MotoSynthPreset;
    float RPM;

    void SetSettings(const FMotoSynthRuntimeSettings& InSettings);
    void SetRPM(float InRPM, float InTimeSec);
    bool IsEnabled();
    void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
};

#endif
