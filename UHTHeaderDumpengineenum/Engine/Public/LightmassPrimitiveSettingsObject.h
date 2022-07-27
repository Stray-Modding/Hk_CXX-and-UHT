#pragma once
#include "CoreMinimal.h"
#include "LightmassPrimitiveSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LightmassPrimitiveSettingsObject.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class ULightmassPrimitiveSettingsObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLightmassPrimitiveSettings LightmassSettings;
    
    ULightmassPrimitiveSettingsObject();
};

