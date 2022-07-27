#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundfieldEffectBase.generated.h"

class USoundfieldEffectSettingsBase;

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEffectBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundfieldEffectSettingsBase* Settings;
    
    USoundfieldEffectBase();
};

