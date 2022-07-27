#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SoundVisualizationStatics.generated.h"

class USoundWave;

UCLASS(Blueprintable)
class USoundVisualizationStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USoundVisualizationStatics();
    UFUNCTION(BlueprintCallable)
    static void GetAmplitude(USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 AmplitudeBuckets, TArray<float>& OutAmplitudes);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateFrequencySpectrum(USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 SpectrumWidth, TArray<float>& OutSpectrum);
    
};

