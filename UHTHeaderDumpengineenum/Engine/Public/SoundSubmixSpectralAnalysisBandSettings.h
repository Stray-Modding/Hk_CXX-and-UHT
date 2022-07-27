#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixSpectralAnalysisBandSettings.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundSubmixSpectralAnalysisBandSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BandFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AttackTimeMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseTimeMsec;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float QFactor;
    
    FSoundSubmixSpectralAnalysisBandSettings();
};

