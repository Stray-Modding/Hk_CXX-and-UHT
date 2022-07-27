#pragma once
#include "CoreMinimal.h"
#include "MotoSynthRuntimeSettings.generated.h"

class UMotoSynthSource;

USTRUCT(BlueprintType)
struct MOTOSYNTH_API FMotoSynthRuntimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSynthToneEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SynthToneVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SynthToneFilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SynthOctaveShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGranularEngineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GranularEngineVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GranularEnginePitchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumSamplesToCrossfadeBetweenGrains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumGrainTableEntriesPerGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GrainTableRandomOffsetForConstantRPMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GrainCrossfadeSamplesForConstantRPMs;
    
    UPROPERTY(EditAnywhere)
    UMotoSynthSource* AccelerationSource;
    
    UPROPERTY(EditAnywhere)
    UMotoSynthSource* DecelerationSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStereoWidenerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoDelayMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoWidenerWetlevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoWidenerDryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoWidenerDelayRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStereoWidenerFilterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoWidenerFilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoWidenerFilterQ;
    
    FMotoSynthRuntimeSettings();
};

