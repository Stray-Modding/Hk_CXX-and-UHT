#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESkyLightSourceType -FallbackName=ESkyLightSourceType
#include "DatasmithSkyLightComponentTemplate.generated.h"

class UTextureCube;

UCLASS()
class DATASMITHCONTENT_API UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESkyLightSourceType> SourceType;
    
    UPROPERTY()
    int32 CubemapResolution;
    
    UPROPERTY()
    UTextureCube* Cubemap;
    
    UDatasmithSkyLightComponentTemplate();
};

