#pragma once
#include "CoreMinimal.h"
#include "EConcurrencyVolumeScaleMode.h"
#include "EMaxConcurrentResolutionRule.h"
#include "SoundConcurrencySettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundConcurrencySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLimitToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaxConcurrentResolutionRule::Type> ResolutionRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RetriggerTime;
    
private:
    UPROPERTY(EditAnywhere)
    float VolumeScale;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConcurrencyVolumeScaleMode VolumeScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeScaleAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bVolumeScaleCanRelease: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeScaleReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoiceStealReleaseTime;
    
    FSoundConcurrencySettings();
};

