#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DatasmithDecalComponentTemplate.generated.h"

class UMaterialInterface;

UCLASS()
class DATASMITHCONTENT_API UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SortOrder;
    
    UPROPERTY()
    FVector DecalSize;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UDatasmithDecalComponentTemplate();
};

