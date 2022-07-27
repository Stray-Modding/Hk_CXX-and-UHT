#pragma once
#include "CoreMinimal.h"
#include "AudioEQEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundClassAdjuster.h"
#include "SoundMix.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class USoundMix : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    uint8 bApplyEQ: 1;
    
    UPROPERTY(EditAnywhere)
    float EQPriority;
    
    UPROPERTY(EditAnywhere)
    FAudioEQEffect EQSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSoundClassAdjuster> SoundClassEffects;
    
    UPROPERTY(EditAnywhere)
    float InitialDelay;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    USoundMix();
};

