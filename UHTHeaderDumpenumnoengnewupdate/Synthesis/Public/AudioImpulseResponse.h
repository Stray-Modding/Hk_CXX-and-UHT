#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioImpulseResponse.generated.h"

UCLASS(BlueprintType)
class SYNTHESIS_API UAudioImpulseResponse : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> ImpulseResponse;
    
    UPROPERTY()
    int32 NumChannels;
    
    UPROPERTY()
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalizationVolumeDb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTrueStereo;
    
    UPROPERTY()
    TArray<float> IRData;
    
    UAudioImpulseResponse();
};

