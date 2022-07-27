#ifndef UE4SS_SDK_SoundVisualizations_HPP
#define UE4SS_SDK_SoundVisualizations_HPP

class USoundVisualizationStatics : public UBlueprintFunctionLibrary
{

    void GetAmplitude(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 AmplitudeBuckets, TArray<float>& OutAmplitudes);
    void CalculateFrequencySpectrum(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 SpectrumWidth, TArray<float>& OutSpectrum);
}; // Size: 0x28

#endif
