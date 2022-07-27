#ifndef UE4SS_SDK_SoundUtilities_HPP
#define UE4SS_SDK_SoundUtilities_HPP

struct FSoundVariation
{
    class USoundWave* SoundWave;
    float ProbabilityWeight;
    FVector2D VolumeRange;
    FVector2D PitchRange;

};

class USoundSimple : public USoundBase
{
    TArray<FSoundVariation> Variations;
    class USoundWave* SoundWave;

};

class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetQFromBandwidth(const float InBandwidth);
    float GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote);
    int32 GetMIDIPitchFromFrequency(const float Frequency);
    float GetLogFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    float GetLinearFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    float GetGainFromMidiVelocity(int32 InVelocity);
    float GetFrequencyMultiplierFromSemitones(const float InPitchSemitones);
    float GetFrequencyFromMIDIPitch(const int32 MidiNote);
    float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
    float GetBandwidthFromQ(const float InQ);
    float ConvertLinearToDecibels(const float InLinear, const float InFloor);
    float ConvertDecibelsToLinear(const float InDecibels);
};

#endif
