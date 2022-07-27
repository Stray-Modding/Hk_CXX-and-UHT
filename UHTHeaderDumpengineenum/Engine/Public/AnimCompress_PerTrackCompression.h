#pragma once
#include "CoreMinimal.h"
#include "AnimCompress_RemoveLinearKeys.h"
#include "AnimationCompressionFormat.h"
#include "AnimCompress_PerTrackCompression.generated.h"

UCLASS(EditInlineNew)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxZeroingThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxPosDiffBitwise;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleDiffBitwise;
    
    UPROPERTY(EditAnywhere)
    float MaxScaleDiffBitwise;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedRotationFormats;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedTranslationFormats;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedScaleFormats;
    
    UPROPERTY(EditAnywhere)
    uint8 bResampleAnimation: 1;
    
    UPROPERTY(EditAnywhere)
    float ResampledFramerate;
    
    UPROPERTY(EditAnywhere)
    int32 MinKeysForResampling;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAdaptiveError: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseOverrideForEndEffectors: 1;
    
    UPROPERTY(EditAnywhere)
    int32 TrackHeightBias;
    
    UPROPERTY(EditAnywhere)
    float ParentingDivisor;
    
    UPROPERTY(EditAnywhere)
    float ParentingDivisorExponent;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseAdaptiveError2: 1;
    
    UPROPERTY(EditAnywhere)
    float RotationErrorSourceRatio;
    
    UPROPERTY(EditAnywhere)
    float TranslationErrorSourceRatio;
    
    UPROPERTY(EditAnywhere)
    float ScaleErrorSourceRatio;
    
    UPROPERTY(EditAnywhere)
    float MaxErrorPerTrackRatio;
    
    UPROPERTY()
    float PerturbationProbeSize;
    
    UAnimCompress_PerTrackCompression();
};

