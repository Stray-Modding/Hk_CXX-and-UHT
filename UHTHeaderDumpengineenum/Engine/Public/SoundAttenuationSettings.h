#pragma once
#include "CoreMinimal.h"
#include "EPriorityAttenuationMethod.h"
#include "BaseAttenuationSettings.h"
#include "ESoundSpatializationAlgorithm.h"
#include "EReverbSendMethod.h"
#include "EAirAbsorptionMethod.h"
#include "ECollisionChannel.h"
#include "RuntimeFloatCurve.h"
#include "SoundAttenuationPluginSettings.h"
#include "AttenuationSubmixSendSettings.h"
#include "SoundAttenuationSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundAttenuationSettings : public FBaseAttenuationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAttenuate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSpatialize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAttenuateWithLPF: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableListenerFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableFocusInterpolation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableOcclusion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseComplexCollisionForOcclusion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableReverbSend: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnablePriorityAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bApplyNormalizationToStereoSounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableLogFrequencyScaling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableSubmixSends: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESoundSpatializationAlgorithm> SpatializationAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BinauralRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAirAbsorptionMethod AbsorptionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EReverbSendMethod ReverbSendMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPriorityAttenuationMethod PriorityAttenuationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OmniRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StereoSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPFRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPFRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPFFrequencyAtMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LPFFrequencyAtMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HPFFrequencyAtMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HPFFrequencyAtMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonFocusAzimuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonFocusDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusPriorityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonFocusPriorityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusVolumeAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonFocusVolumeAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusAttackInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusReleaseInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionLowPassFilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionVolumeAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionInterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbWetLevelMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbWetLevelMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ManualReverbSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomReverbSendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAttenuationSubmixSendSettings> SubmixSendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityAttenuationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityAttenuationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityAttenuationDistanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PriorityAttenuationDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ManualPriorityAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CustomPriorityAttenuationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationPluginSettings PluginSettings;
    
    FSoundAttenuationSettings();
};

