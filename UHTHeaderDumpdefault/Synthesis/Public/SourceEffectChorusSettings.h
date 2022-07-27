#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundModulationDestinationSettings -FallbackName=SoundModulationDestinationSettings
#include "SourceEffectChorusSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectChorusSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Depth;
    
    UPROPERTY()
    float Frequency;
    
    UPROPERTY()
    float Feedback;
    
    UPROPERTY()
    float WetLevel;
    
    UPROPERTY()
    float DryLevel;
    
    UPROPERTY()
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings DepthModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings FrequencyModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings FeedbackModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings WetModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings DryModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundModulationDestinationSettings SpreadModulation;
    
    FSourceEffectChorusSettings();
};

