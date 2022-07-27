#include "SoundUtilitiesBPFunctionLibrary.h"

float USoundUtilitiesBPFunctionLibrary::GetQFromBandwidth(const float InBandwidth) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote) {
    return 0.0f;
}

int32 USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(const float Frequency) {
    return 0;
}

float USoundUtilitiesBPFunctionLibrary::GetLogFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetLinearFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetGainFromMidiVelocity(int32 InVelocity) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetFrequencyMultiplierFromSemitones(const float InPitchSemitones) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(const int32 MidiNote) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetBandwidthFromQ(const float InQ) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::ConvertLinearToDecibels(const float InLinear, const float InFloor) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::ConvertDecibelsToLinear(const float InDecibels) {
    return 0.0f;
}

USoundUtilitiesBPFunctionLibrary::USoundUtilitiesBPFunctionLibrary() {
}

