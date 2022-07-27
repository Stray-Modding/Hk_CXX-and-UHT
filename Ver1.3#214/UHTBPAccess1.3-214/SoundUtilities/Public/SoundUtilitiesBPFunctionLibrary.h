#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SoundUtilitiesBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SOUNDUTILITIES_API USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USoundUtilitiesBPFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static float GetQFromBandwidth(const float InBandwidth);
    
    UFUNCTION(BlueprintCallable)
    static float GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMIDIPitchFromFrequency(const float Frequency);
    
    UFUNCTION(BlueprintCallable)
    static float GetLogFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    
    UFUNCTION(BlueprintCallable)
    static float GetLinearFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    
    UFUNCTION(BlueprintCallable)
    static float GetGainFromMidiVelocity(int32 InVelocity);
    
    UFUNCTION(BlueprintCallable)
    static float GetFrequencyMultiplierFromSemitones(const float InPitchSemitones);
    
    UFUNCTION(BlueprintCallable)
    static float GetFrequencyFromMIDIPitch(const int32 MidiNote);
    
    UFUNCTION(BlueprintCallable)
    static float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
    
    UFUNCTION(BlueprintCallable)
    static float GetBandwidthFromQ(const float InQ);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertLinearToDecibels(const float InLinear, const float InFloor);
    
    UFUNCTION(BlueprintCallable)
    static float ConvertDecibelsToLinear(const float InDecibels);
    
};

