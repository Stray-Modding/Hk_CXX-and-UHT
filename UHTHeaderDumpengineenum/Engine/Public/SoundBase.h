#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_AssetUserData.h"
#include "SoundConcurrencySettings.h"
#include "EVirtualizationMode.h"
#include "SoundSubmixSendInfo.h"
#include "SoundSourceBusSendInfo.h"
#include "SoundBase.generated.h"

class USoundClass;
class USoundConcurrency;
class USoundAttenuation;
class USoundSubmixBase;
class USoundEffectSourcePresetChain;
class UAssetUserData;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class ENGINE_API USoundBase : public UObject, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    USoundClass* SoundClassObject;
    
    UPROPERTY(EditAnywhere)
    uint8 bDebug: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideConcurrency: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableBusSends: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableBaseSubmix: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSubmixSends: 1;
    
    UPROPERTY()
    uint8 bHasDelayNode: 1;
    
    UPROPERTY()
    uint8 bHasConcatenatorNode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bBypassVolumeScaleForPriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVirtualizationMode VirtualizationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<USoundConcurrency*> ConcurrencySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundConcurrencySettings ConcurrencyOverrides;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float Duration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float MaxDistance;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float TotalSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmixBase* SoundSubmixObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundEffectSourcePresetChain* SourceEffectChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> BusSends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
    USoundBase();
    
    // Fix for true pure virtual functions not being implemented
};

