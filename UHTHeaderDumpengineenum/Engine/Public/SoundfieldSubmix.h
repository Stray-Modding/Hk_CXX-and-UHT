#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SoundSubmixWithParentBase.h"
#include "SoundfieldSubmix.generated.h"

class USoundfieldEncodingSettingsBase;
class USoundfieldEffectBase;

UCLASS(EditInlineNew)
class ENGINE_API USoundfieldSubmix : public USoundSubmixWithParentBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName SoundfieldEncodingFormat;
    
    UPROPERTY(EditAnywhere)
    USoundfieldEncodingSettingsBase* EncodingSettings;
    
    UPROPERTY(EditAnywhere)
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
    
    UPROPERTY()
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    
    USoundfieldSubmix();
};

