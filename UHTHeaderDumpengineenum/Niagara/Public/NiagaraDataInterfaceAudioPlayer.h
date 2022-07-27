#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAudioPlayer.generated.h"

class USoundConcurrency;
class USoundBase;
class USoundAttenuation;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundBase* SoundToPlay;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* Attenuation;
    
    UPROPERTY(EditAnywhere)
    USoundConcurrency* Concurrency;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ParameterNames;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bLimitPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStopWhenComponentIsDestroyed;
    
    UNiagaraDataInterfaceAudioPlayer();
};

