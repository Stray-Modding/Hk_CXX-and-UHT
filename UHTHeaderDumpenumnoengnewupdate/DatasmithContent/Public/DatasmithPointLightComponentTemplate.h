#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "DatasmithPointLightComponentTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    ELightUnits IntensityUnits;
    
    UPROPERTY()
    float SourceRadius;
    
    UPROPERTY()
    float SourceLength;
    
    UPROPERTY()
    float AttenuationRadius;
    
    UDatasmithPointLightComponentTemplate();
};

